#include<stdio.h>
struct employees {
    char name[20];
    int employeeid;
    float salary;
    char designation[20];
    int phoneno;
};

int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct employees emp[n]; // Declare after reading n
    int i;
    for(i = 0; i < n; i++) {
        printf("Enter the details of employee %d\n", i + 1);
        scanf("%19s %d %f %19s %d", emp[i].name, &emp[i].employeeid, &emp[i].salary, emp[i].designation, &emp[i].phoneno);
    }
    for(i = 0; i < n; i++) {
        printf("%s \n%d \n%f \n%s \n%d", emp[i].name, emp[i].employeeid, emp[i].salary, emp[i].designation, emp[i].phoneno);  
    }
    return 0;
}
