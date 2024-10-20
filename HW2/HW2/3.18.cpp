#include <stdio.h>

int main() {
    double grossSales, commission;

    while (1) {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &grossSales);

        if (grossSales == -1) {
            break;
        }

        commission = 200 + (0.09 * grossSales);
        printf("Salary is: $%.2lf\n\n", commission);
    }

    return 0;
}
