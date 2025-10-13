#include<stdio.h>
#include<string.h>
struct person {
    char name[20];
    int age;
};
int main(){
    struct person p1 = {"John", 25};
    struct person p2 ;
    strcpy(p2.name, "ram");
    p2.age = 30;

    printf("%s %d\n", p1.name, p1.age);
    printf("%s %d\n", p2.name, p2.age);
    return 0;
}