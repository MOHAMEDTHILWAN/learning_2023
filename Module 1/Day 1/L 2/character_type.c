#include <stdio.h>
int Charactertype(char c) {
    int type;

    if (c >= 'A' && c <= 'Z') {
        type = 1;  // Uppercase letter
    } else if (c >= 'a' && c <= 'z') {
        type = 2;  // Lowercase letter
    } else if (c >= '0' && c <= '9') {
        type = 3;  // Digit
    } else if (c >= 32 && c <= 126) {
        type = 4;  // Printable symbol
    } else {
        type = 5;  // Non-printable symbol
    }

    return type;
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    int chType = Charactertype(ch);

    switch (chType) {
        case 1:
            printf("Uppercase letter\n");
            break;
        case 2:
            printf("Lowercase letter\n");
            break;
        case 3:
            printf("Digit\n");
            break;
        case 4:
            printf("Printable symbol\n");
            break;
        case 5:
            printf("Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
    }

    return 0;
}
