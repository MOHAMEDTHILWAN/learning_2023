#include <stdio.h>
int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num = num | (1 << 0);  // Set 1st bit, if operation type is 1
            break;
        case 2:
            num = num & ~(1 << 31);  // Clear 31st bit, if operation type is 2
            break;
        case 3:
            num = num ^ (1 << 15);  // Toggle 16th bit, if operation type is 3
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return num;
}

int main() {
    int num, oper_type;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type: ");
    scanf("%d", &oper_type);

    int result;
    result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
