#include<stdio.h>
#include<string.h>
struct car
{
    int reg;
    char type[20];
    int price;
    struct car *link;
};

int main(){
    struct car c1,c2;
    c1.link=NULL;
    c1.reg=12536;
    strcpy(c1.type, "Audi");
    c1.price=20000;

    c1.link = NULL;
    c2.link = NULL; 
    c1.link = &c2;     
    c2.reg = 12537;
    strcpy(c2.type, "BMW");
    c2.price = 30000;

    printf("Car 1:%d %s %d\n", c1.reg, c1.type, c1.price);
    printf("Car 2:%d %s %d\n", c2.reg, c2.type, c2.price);

    return 0;
}
