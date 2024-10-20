#include <stdio.h>

int main() {
    int code;         // 員工代碼
    double weeklyPay; // 週薪
    double salary, hourlyWage, hoursWorked, sales, itemPay, itemsProduced;

    while (1) {
        // 提示輸入員工的代碼
        printf("Enter employee's pay code (1: Manager, 2: Hourly worker, 3: Commission worker, 4: Pieceworker, 0 to exit): ");
        scanf("%d", &code);

        // 代碼 0 結束程式
        if (code == 0) {
            break;
        }

        switch (code) {
        case 1:  // 管理人員
            printf("Enter the fixed weekly salary: ");
            scanf("%lf", &salary);
            weeklyPay = salary;
            break;

        case 2:  // 按時計酬員工
            printf("Enter the hourly wage: ");
            scanf("%lf", &hourlyWage);
            printf("Enter the number of hours worked: ");
            scanf("%lf", &hoursWorked);

            if (hoursWorked <= 40) {
                weeklyPay = hourlyWage * hoursWorked;
            }
            else {
                weeklyPay = hourlyWage * 40 + (hoursWorked - 40) * hourlyWage * 1.5;
            }
            break;

        case 3:  // 佣金制員工
            printf("Enter the gross weekly sales: ");
            scanf("%lf", &sales);
            weeklyPay = 250 + 0.057 * sales;
            break;

        case 4:  // 計件工
            printf("Enter the pay per item: ");
            scanf("%lf", &itemPay);
            printf("Enter the number of items produced: ");
            scanf("%lf", &itemsProduced);
            weeklyPay = itemPay * itemsProduced;
            break;

        default:
            printf("Invalid pay code. Please enter a valid code.\n");
            continue;
        }

        // 顯示每個員工的週薪
        printf("The weekly pay for the employee is: $%.2f\n\n", weeklyPay);
    }

    return 0;
}
