#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStructArray(const char* input, struct Student* students, int size) {
    char* token = strtok(input, " ");
    int count = 0;

    while (token != NULL && count < size) {
        students[count].rollno = atoi(token);

        token = strtok(NULL, " ");
        strncpy(students[count].name, token, sizeof(students[count].name) - 1);
        students[count].name[sizeof(students[count].name) - 1] = '\0';

        token = strtok(NULL, " ");
        students[count].marks = atof(token);

        token = strtok(NULL, " ");
        count++;
    }
}

int main() {
    char input[100];
    int size;

    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); 

    struct Student students[size];

    parseStringToStructArray(input, students, size);

    // Printing the initialized structure
    for (int i = 0; i < size; i++) {
        printf("Student : %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
