#include <stdio.h>

int main() {
    int n = 5;  // 菱形的中心行數

    // 打印菱形的上半部分和中心行
    for (int i = 1; i <= n; i++) {
        printf("%*s", n - i + 1, "");  // 打印空格
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");  // 打印星號
        }
        printf("\n");
    }

    // 打印菱形的下半部分
    for (int i = n - 1; i >= 1; i--) {
        printf("%*s", n - i + 1, "");  // 打印空格
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");  // 打印星號
        }
        printf("\n");
    }

    return 0;
}
