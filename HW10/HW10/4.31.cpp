#include <stdio.h>

int main() {
    int n = 5;  // �٧Ϊ����ߦ��

    // ���L�٧Ϊ��W�b�����M���ߦ�
    for (int i = 1; i <= n; i++) {
        printf("%*s", n - i + 1, "");  // ���L�Ů�
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");  // ���L�P��
        }
        printf("\n");
    }

    // ���L�٧Ϊ��U�b����
    for (int i = n - 1; i >= 1; i--) {
        printf("%*s", n - i + 1, "");  // ���L�Ů�
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");  // ���L�P��
        }
        printf("\n");
    }

    return 0;
}
