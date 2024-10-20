#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0;  // 初始投資額
    int years = 15;             // 投資年數
    double rate;                // 利率

    // 迴圈不同的利率
    for (rate = 10.0; rate <= 12.0; rate += 0.5) {
        printf("Interest Rate: %.1f%%\n", rate);
        printf("Year\tAmount on deposit\n");

        // 計算每年的投資金額
        for (int year = 1; year <= years; year++) {
            double amount = principal * pow(1.0 + rate / 100.0, year);
            printf("%4d\t%.2f\n", year, amount);
        }
        printf("\n");
    }

    return 0;
}
