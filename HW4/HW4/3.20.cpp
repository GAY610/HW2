#include <stdio.h>

int main() {
    double hoursWorked, hourlyRate, salary;

    while (1) {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hoursWorked);

        if (hoursWorked == -1) {
            break;
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &hourlyRate);

        if (hoursWorked <= 40) {
            salary = hoursWorked * hourlyRate;
        }
        else {
            salary = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
        }

        printf("Salary is $%.2lf\n\n", salary);
    }

    return 0;
}
