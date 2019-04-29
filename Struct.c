#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char *name;
    int rno;
    float marks;
};

struct Student create_new_stu() {
    struct Student s;

    s.name = (char *) malloc(100);
    printf("Enter name: ");
    scanf("%s",s.name);

    printf("Enter roll no.: ");
    scanf("%d", &s.rno);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    return s;
}

void display(struct Student stu) {
    printf("Name: %s\nRoll no: %d\nMarks: %f\n", stu.name, stu.rno, stu.marks);
}

struct Student get_topper(struct Student s[]) {
    int i = 0;
    struct Student topper = s[0];
    for(i = 0; i < 3; i++) {
        if (s[i].marks > topper.marks) {
            topper = s[i];
        }
    }
    return topper;
}


int main() {

    struct Student students[3];

    students[0] = create_new_stu();
    students[1] = create_new_stu();
    students[2] = create_new_stu();

    display(students[0]);
    display(students[1]);
    display(students[2]);

    display(get_topper(students));

    return 0;
}


