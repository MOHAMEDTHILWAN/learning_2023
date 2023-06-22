#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    const char* delimiter = " ";
    char* token;
    char* rest;
    int i = 0;

    rest = strdup(input);

    token = strtok(rest, delimiter);
    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);

        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
        i++;
    }

    free(rest); // Free the memory allocated by strdup
}

void displayStudents(const struct Student* students, int size) {
    printf("Student Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    char input[100];
    printf("Enter the student details: ");
    getchar();  // Clear the input buffer
    fgets(input, sizeof(input), stdin);

    // Remove the newline character from input if present
    size_t input_length = strlen(input);
    if (input[input_length - 1] == '\n')
        input[input_length - 1] = '\0';

    parseString(input, students, size);

    displayStudents(students, size);

    free(students);
    return 0;
}