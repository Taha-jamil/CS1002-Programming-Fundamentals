#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int age;
    float total_marks;
};

void show(struct student display, struct student display2);

int main() {
    struct student s1, s2;

    printf("Enter full name of student\n");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter the age of student\n");
    scanf("%d", &s1.age);
    printf("Enter the total marks of student\n");
    scanf("%f", &s1.total_marks);

    // 2nd student
    printf("Enter full name of 2nd student\n");
    fgets(s2.name, sizeof(s2.name), stdin);
    // Remove newline character from s2.name
    s2.name[strcspn(s2.name, "\n")] = '\0';

    printf("Enter the age of student\n");
    scanf("%d", &s2.age);
    printf("Enter the total marks of student\n");
    scanf("%f", &s2.total_marks);

    show(s1, s2);
    return 0;
}

void show(struct student display, struct student display2) {
    printf("The Name of 1st Student is  %s\n", display.name);
    printf("The age of 1st Student is %d\n", display.age);
    printf("The Total marks of 1st Student is %f\n", display.total_marks);

    printf("The Name of 2nd Student is  %s\n", display2.name);
    printf("The age of 2nd Student is %d\n", display2.age);
    printf("The Total marks of 2nd Student is %f\n", display2.total_marks);
}

