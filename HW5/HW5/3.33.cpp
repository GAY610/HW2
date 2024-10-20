#include <stdio.h>

int main() {
    int length, breadth, i, j;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    for (i = 0; i < length; i++) {
        for (j = 0; j < breadth; j++) {
            if (i == 0 || i == length - 1 || j == 0 || j == breadth - 1) {
                printf("+");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
