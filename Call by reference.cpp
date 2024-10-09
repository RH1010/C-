#include<iostream>
using namespace std;
int maximum(int *a, int *b)
{
    if(*a>*b)
        return *a;
    else
        return *b;
}
int main()
{
    int a,b;
    cout<< "Number a: ";
    cin>>a;
    cout<< "Number b: ";
    cin>>b;
    int r;
    r = maximum(&a,&b);
    cout<< "Maximum value from address: "<<&r; // (&r) show the address value and //(r) show the actual value
    return 0;
}


