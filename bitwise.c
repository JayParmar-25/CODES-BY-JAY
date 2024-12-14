#include <stdio.h>

void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

void bitwiseMenu(int num1, int num2) {
    int choice;
    do {
        printf("\n--- Bitwise Operations Menu ---\n");
        printf("1. AND (&)\n");
        printf("2. OR (|)\n");
        printf("3. XOR (^)\n");
        printf("4. NOT (~)\n");
        printf("5. Left Shift (<<)\n");
        printf("6. Right Shift (>>)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Result of %d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case 2:
            printf("Result of %d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case 3:
            printf("Result of %d ^ %d = %d\n", num1, num2, num1 ^ num2);
            break;
        case 4:
            printf("Result of ~%d = %d\n", num1, ~num1);
            printf("Result of ~%d = %d\n", num2, ~num2);
            break;
        case 5:
            printf("Enter the number of positions to shift: ");
            int shift;
            scanf("%d", &shift);
            printf("Result of %d << %d = %d\n", num1, shift, num1 << shift);
            printf("Result of %d << %d = %d\n", num2, shift, num2 << shift);
            break;
        case 6:
            printf("Enter the number of positions to shift: ");
            scanf("%d", &shift);
            printf("Result of %d >> %d = %d\n", num1, shift, num1 >> shift);
            printf("Result of %d >> %d = %d\n", num2, shift, num2 >> shift);
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);
}

int main() {
    int num1, num2;
    
    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Binary representation of %d: ", num1);
    decimalToBinary(num1);

   
    printf("Enter another number for bitwise operations: ");
    scanf("%d", &num2);

    
    bitwiseMenu(num1, num2);

    return 0;
}
