#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter roll no, name and marks of student %d:\n", i + 1);
        scanf("%d %19s %f",&s[i].rollno,&s[i].name,&s[i].marks);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d %19s %f",s[i].rollno,s[i].name,s[i].marks);
    }
    return 0;
}