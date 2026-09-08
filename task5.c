
#include <stdio.h>

int main() {
    char studentName[50];
    char studentID[20];
    int completedLabs;
    int totalLabs;
    float quizMarks;
    float assignmentMarks;
    float projectMarks;
    float labCompletionPercentage;
    float totalAcademicScore;

    printf("Enter Student Name: ");
    scanf("%s", studentName);

    printf("Enter Student ID: ");
    scanf("%s", studentID);

    printf("Enter Number of Completed Labs: ");
    scanf("%d", &completedLabs);

    printf("Enter Total Number of Labs: ");
    scanf("%d", &totalLabs);

    printf("Enter Quiz Marks: ");
    scanf("%f", &quizMarks);

    printf("Enter Assignment Marks: ");
    scanf("%f", &assignmentMarks);

    printf("Enter Project Marks: ");
    scanf("%f", &projectMarks);

    labCompletionPercentage = (float)completedLabs / totalLabs * 100;
    totalAcademicScore = quizMarks + assignmentMarks + projectMarks;

    printf("\n STUDENT PERFORMANCE REPORT \n");
    printf("Student Name: %s\n", studentName);
    printf("Student ID: %s\n", studentID);
    printf("Labs Completed: %d out of %d\n", completedLabs, totalLabs);
    printf("Lab Completion Percentage: %.2f%%\n", labCompletionPercentage);
    printf("Quiz Marks: %.2f\n", quizMarks);
    printf("Assignment Marks: %.2f\n", assignmentMarks);
    printf("Project Marks: %.2f\n", projectMarks);
    printf("Total Academic Score: %.2f\n", totalAcademicScore);

    return 0;
}
}
