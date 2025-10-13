#include<stdio.h>
struct car
{
    int id;
    char name[20];
    int price;
};

int main()
{
    struct car c1,c2,c3;
    scanf("%d %s %d",&c1.id,&c1.name,&c1.price);
    printf("%d %s %d",c1.id,c1.name,c1.price);
    return 0;
}