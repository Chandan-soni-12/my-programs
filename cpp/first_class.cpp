#include<iostream>
using namespace std;
class students
{
    public:
    int roll;
    string name;
    int section;
    void get(){
        cout<<"enter the roll";
        cin>>roll;
        cout<<"enter the name";
        cin>>name;
        cout<<"enter the section";
        cin>>section;
    }
    void display(){
        cout<<"roll is:"<<roll<<endl;
        cout<<"name is:"<<name<<endl;
        cout<<"section is:"<<section<<endl;
    }
};
int main()
{
    students stdu;
    stdu.get();
    stdu.display();
    return 0;
}