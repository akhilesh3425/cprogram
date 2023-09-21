#include <stdio.h>
int main() {
    char name[50];                                              /*Akhilesh singh butola*/
    int rollNumber,numSubjects;

    printf("Enter student's name: ");
    scanf("%s", name);

    printf("Enter student's roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    float totalMarks = 0;

    for (int i = 1; i <= numSubjects; i++) {
        float marks;
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);
        totalMarks += marks;
    }

    float average = totalMarks / numSubjects;

    printf("Average marks: %.2f\n", average);

    if (average > 80) {
        printf("Congrats, %s (Roll Number: %d)! You have scored an average of more than 80%%.\n", name, rollNumber);
    } else {
        printf("Sorry, %s (Roll Number: %d), your average is not more than 80%%.\n", name, rollNumber);
    }
    return 0;
}
