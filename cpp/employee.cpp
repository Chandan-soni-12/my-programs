#include<iostream>
using namespace std;
class employee
{
    public:
    int emp_id;
    string emp_name;
    int emp_salary;
    void get(int id, string name, int salary){
        emp_id = id;
        emp_name = name;
        emp_salary = salary;
    

    void display(){
        cout<<"emp_id is:"<<emp_id<<endl;
        cout<<"emp_name is:"<<emp_name<<endl;
        cout<<"emp_salary is:"<<emp_salary<<endl;
    }
};
int main()
{
    int a, c;
    string b;
    cout << "Enter emp_id: ";
    cin >> a;
    cout << "Enter emp_name: ";
    cin >> b;
    cout << "Enter emp_salary: ";
    cin >> c;
    employee emp;
    emp.get(a, b, c);
    emp.display();
    return 0;
}