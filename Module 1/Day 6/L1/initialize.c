#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStructArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 1001;
        strcpy(students[i].name, "Aron");
        students[i].marks = 100.0;
    }
}

int main() {
    int size = 1;
    struct Student students[size];

    initializeStructArray(students, size);

    // Printing the initialized structure
    for (int i = 0; i < size; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
