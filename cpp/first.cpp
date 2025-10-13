#include<iostream>
using namespace std;
int main(){
    int a;
    a=10;
    cout<<a;
}   double a,b,c,d,r1,r2;
    cout<<"enter the value of a,b,c:";
    cin>>a>>b>>c;
    d=(b*b)-4*a*c;
    if (d>0){
        r1= ((-b)+sqrt(d))/(2*a);
        r2= ((-b)-sqrt(d))/(2*a);
        cout<<"roots are real and distinct.";
        cout<<"roots are:"<<r1<<" "<<r2;
    }
    else if (d==0)
    {
        cout<<"The roots are equal";
    }

    else{
        cout<<"roots are imaginary";
    }
}