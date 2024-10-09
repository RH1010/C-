#include<iostream>
using namespace std;
int main()
{
    int a=10, b=20, *p1=&a, *p2=&b;
    cout<<"Before swap: *p1="<<*p1 << " *p2="<<*p2<<endl;

    *p1 = *p1+*p2;      //a = a+b;    //a=(10+20) 30  a=30
    *p2 = *p1-*p2;      //b = a-b;    //b=(30-20) 10  b=10
    *p1 = *p1-*p2;      // a = a-b;    //a=(30-10) 20  a=20

    cout<<"After swap: *p1="<<*p1 << " *p2="<<*p2<<endl;
    return 0;
}

