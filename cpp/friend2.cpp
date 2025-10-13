#include <iostream>
using namespace std;
class B;
class A {
    private: 
    int a;
    public:
    void geta() {
        cout<<"Enter a:"<<endl;
        cin>>a;
    }
    friend void printing(A,B);
};
class B{
    private: 
    int b;
    public:
    void getb(){
        cout<<"Enter b"<<endl;
        cin>>b;
    }
    friend void printing(A,B);
};
void printing(A obj1, B obj2) {
        int product = obj1.a * obj2.b;
        cout<<"Product is:"<<product<<endl;
}
int main(){
    A a1;
    B b1;
    a1.geta();
    b1.getb();
    printing (a1,b1);
    return 0;
}