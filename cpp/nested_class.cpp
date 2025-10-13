#include<iostream>
using namespace std;

// class A {
//     private:
//         int a;
//     public:
//     class B {
//         public:
//         int b;
//         B(int b){
//             this->b = b;
//         }

//         void display() {
//             cout << "Inner class variable: " << b << endl;
//         }
//     };

// };

// int main() {

//     A::B inner(20);
//     inner.display();

//     return 0;
// }




class A{
    int a;
    private:
    class B{
        int b;
        public:
        void setb(int x);
        void getb();
    };
}