#include <stdio.h>

int isVowel(char c) {
    int result;

    switch (c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            result = 1;
            break;
        default:
            result = 0;
    }

    return result;
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    int isVowelResult = isVowel(ch);

    if (isVowelResult == 1) {
        printf("%c is a Vowel\n",ch);
    } else {
        printf("%c is not a Vowel\n",ch);
    }

    return 0;
}
