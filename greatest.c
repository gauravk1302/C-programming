#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Nested if-else to find the greatest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("%d is the greatest.", num1);
        } else {
            printf("%d is the greatest.", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("%d is the greatest.\n", num2);
        } else {
            printf("%d is the greatest.\n", num3);
        }
    }

    return 0;
}
