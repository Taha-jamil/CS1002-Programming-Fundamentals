#include<stdio.h>

int main() {
    int number;

    // Input number of students (allow multiple attempts for a valid input)
    do {
        printf("Enter number of students: ");
        scanf("%d", &number);

        if (number < 1) {
            printf("Inappropriate Input. Number of students should be at least 1.\n");
        }
    } while (number < 1);

    char Student_name[number][50];
    char Father_name[number][50];
    int Class[number];
    int Student_number[number];

    // Input data for each student
    for (int i = 0; i < number; i++) {
        printf("Enter student number: ");
        scanf("%d", &Student_number[i]);

        printf("Enter student name: ");
        getchar(); // Consume the newline character left in the buffer
        fgets(Student_name[i], sizeof(Student_name[i]), stdin);
        int j = 0;
        while (Student_name[i][j] != '\0' && Student_name[i][j] != '\n') {
            j++;
        }
        if (Student_name[i][j] == '\n') {
            Student_name[i][j] = '\0';
        }

        printf("Enter father's name: ");
        fgets(Father_name[i], sizeof(Father_name[i]), stdin);
        j = 0;
        while (Father_name[i][j] != '\0' && Father_name[i][j] != '\n') {
            j++;
        }
        if (Father_name[i][j] == '\n') {
            Father_name[i][j] = '\0';
        }

        printf("Enter class: ");
        scanf("%d", &Class[i]);
    }

    // Display the student data
    printf("Student Number | Name \t| Father's Name | Class\n");
    for (int j = 0; j <= 45; j++) {
        printf("_");
    }
    printf("\n\n");

    // Display data based on class
    for (int class_number = 1; class_number <= 12; class_number++) {
        for (int i = 0; i < number; i++) {
            if (Class[i] == class_number) {
                printf("%d\t |%s\t|%s\t|%d\n", Student_number[i], Student_name[i], Father_name[i], Class[i]);
            }
        }
    }

    return 0;
}

