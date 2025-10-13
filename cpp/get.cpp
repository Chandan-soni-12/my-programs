#include<iostream>
using namespace std;
class employee
{
    private:
    string first;
    string last;
    public:
    void getname(){
        cout<<"enter the first name";
        getline(cin,first);
        cout<<"enter the last name";
        getline(cin,last);
    }
    void show(){
        cout<<first<<" "<<last;
    }
};
int main(){
    employee e;
    e.getname();
    e.show();
}