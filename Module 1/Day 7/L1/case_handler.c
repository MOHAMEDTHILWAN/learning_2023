#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void copyFile(const char* sourceFile, const char* destinationFile, int convertCase) {
    FILE* source = fopen(sourceFile, "r");
    FILE* destination = fopen(destinationFile, "w");

    if (source == NULL || destination == NULL) {
        printf("Failed to open files.\n");
        return;
    }

    int c;
    int shouldConvert = convertCase != 0;
    int isFirstCharacter = 1;
    int isSentenceCase = convertCase == 's';

    while ((c = fgetc(source)) != EOF) {
        if (shouldConvert) {
            if (isFirstCharacter && isalpha(c)) {
                if (isSentenceCase) {
                    fputc(toupper(c), destination);
                } else {
                    fputc(convertCase == 'u' ? toupper(c) : tolower(c), destination);
                }
                isFirstCharacter = 0;
            } else if (isSentenceCase && c == '.') {
                fputc(c, destination);
                isFirstCharacter = 1;
            } else {
                fputc(convertCase == 'u' ? toupper(c) : tolower(c), destination);
            }
        } else {
            fputc(c, destination);
        }
    }

    fclose(source);
    fclose(destination);
}

int main(int argc, char* argv[]) {
    if (argc < 4) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp [option] sourceFile destinationFile\n");
        return 0;
    }

    int convertCase = 0;
    char* option = argv[1];

    if (strlen(option) > 1 && option[0] == '-') {
        convertCase = option[1];
    }

    char* sourceFile = argv[2];
    char* destinationFile = argv[3];

    copyFile(sourceFile, destinationFile, convertCase);

    printf("File copied successfully.\n");

    return 0;
}
