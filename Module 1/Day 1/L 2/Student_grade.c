#include <stdio.h>
char getGrade(int mark) {
    char grade;

    if (mark >= 90 && mark <= 100) {
        grade = 'A';
    } else if (mark >= 75 && mark <= 89) {
        grade = 'B';
    } else if (mark >= 60 && mark <= 74) {
        grade = 'C';
    } else if (mark >= 50 && mark <= 59) {
        grade = 'D';
    } else if (mark >= 36 && mark <= 49) {
        grade = 'E';
    } else if (mark >= 0 && mark <= 35) {
        grade = 'F';
    } else {
        printf("Invalid mark.\n");
        grade = '\0'; 
    }

    return grade;
}

int main() {
    int mark;

    printf("Enter the student's mark: ");
    scanf("%d", &mark);

    char grade = getGrade(mark);

    if (grade == 'A') {
        printf("Grade A.\n");
    } else if (grade == 'B') {
        printf("Grade B.\n");
    } else if (grade == 'C') {
        printf("Grade C.\n");
    } else if (grade == 'D') {
        printf("Grade D.\n");
    } else if (grade == 'E') {
        printf("Grade E.\n");
    } else if (grade == 'F') {
        printf("Grade F.\n");
    } else {
        printf("Invalid grade.\n");
    }

    return 0;
}
