#include <iostream>
using namespace std;
class A {
    private: 
    int a;
    public:
    void geta() {
        cout<<"Enter a:"<<endl;
        cin>>a;
    }
    friend class C;
};
class B{
    private: 
    int b;
    public:
    void getb(){
        cout<<"Enter b"<<endl;
        cin>>b;
    }
    friend class C;
};
class C {
    private: int product;
    public:
    void printing(A obj1, B obj2) {
        product = obj1.a * obj2.b;
        cout<<"Product is:"<<product<<endl;
    }
};
int main(){
    A a1;
    B b1;
    C c1;
    a1.geta();
    b1.getb();
    c1.printing (a1,b1);
    return 0;
}