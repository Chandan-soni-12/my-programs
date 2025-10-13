// #include<stdio.h>
// struct student
// {
//     int rollno;
//     char name[20];
//     float marks;
// };
// int main(){
//     struct student s1;
//     scanf("%d %s %f",&s1.rollno,&s1.name,&s1.marks);
//     printf("%d %s %f",s1.rollno,s1.name,s1.marks);
//     printf("\n%d",sizeof(struct student));
//     return 0;
// }





#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int phnumber
};

int main(){
    struct student students[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Enter roll number, name and phnumber for student %d: ", i + 1);
        scanf("%d %s %d", &students[i].rollno, students[i].name, &students[i].phnumber);
    }

    for(int i = 0; i < 5; i++) {
        printf("\n%d %s %d\n", students[i].rollno, students[i].name, students[i].phnumber);
    }

    printf("\nSize of struct student: %d", sizeof(struct student));
    return 0;
}


