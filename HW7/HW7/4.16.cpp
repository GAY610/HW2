#include <stdio.h>

int main() {
    int rows = 10;  // �w�q�T���Ϊ����

    // �Ϯ� A
    printf("(A)\n");
    for (int i = 1; i <= rows; i++) {
        printf("%.*s\n", i, "**********");  // �ϥή榡�ƿ�X����P�����ƶq
    }

    // �Ϯ� B
    printf("(B)\n");
    for (int i = rows; i >= 1; i--) {
        printf("%.*s\n", i, "**********");
    }

    // �Ϯ� C
    printf("(C)\n");
    for (int i = 1; i <= rows; i++) {
        printf("%*s%.*s\n", rows - i, "", i, "**********");  // ���L�Ů�M�P��
    }

    // �Ϯ� D
    printf("(D)\n");
    for (int i = rows; i >= 1; i--) {
        printf("%*s%.*s\n", rows - i, "", i, "**********");
    }

    return 0;
}

