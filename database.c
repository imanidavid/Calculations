#include <stdio.h>

#define STUDENT_COUNT 5

// Structure to hold student data
typedef struct {
    char name[50];
    float subject1;
    float subject2;
    float subject3;
    char grade;
} Student;

// Function to calculate grade
char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    Student students[STUDENT_COUNT];

    // Input student details
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);
        printf("Subject 1 Score: ");
        scanf("%f", &students[i].subject1);
        printf("Subject 2 Score: ");
        scanf("%f", &students[i].subject2);
        printf("Subject 3 Score: ");
        scanf("%f", &students[i].subject3);
        
        float avg = (students[i].subject1 + students[i].subject2 + students[i].subject3) / 3;
        students[i].grade = calculateGrade(avg);
    }

    // Display student records
    printf("\nStudent Records:\n");
    printf("-----------------------------------------------\n");
    printf("Name\t\tSubject1\tSubject2\tSubject3\tGrade\n");
    printf("-----------------------------------------------\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%c\n", students[i].name, students[i].subject1, students[i].subject2, students[i].subject3, students[i].grade);
    }
    
    return 0;
}
