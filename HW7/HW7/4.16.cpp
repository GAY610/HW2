#include <stdio.h>

int main() {
    int rows = 10;  // 定義三角形的行數

    // 圖案 A
    printf("(A)\n");
    for (int i = 1; i <= rows; i++) {
        printf("%.*s\n", i, "**********");  // 使用格式化輸出控制星號的數量
    }

    // 圖案 B
    printf("(B)\n");
    for (int i = rows; i >= 1; i--) {
        printf("%.*s\n", i, "**********");
    }

    // 圖案 C
    printf("(C)\n");
    for (int i = 1; i <= rows; i++) {
        printf("%*s%.*s\n", rows - i, "", i, "**********");  // 打印空格和星號
    }

    // 圖案 D
    printf("(D)\n");
    for (int i = rows; i >= 1; i--) {
        printf("%*s%.*s\n", rows - i, "", i, "**********");
    }

    return 0;
}

