#include<iostream>
using namespace std;
int maximum(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main ()
{
    int a,b;
    cout<< "Number a:";
    cin >> a;
    cout<< "Number b:";
    cin>>b;
    int r;
    r = maximum(a,b);                  //call by value
    cout << "maximum number is : " << r;
return 0;
}
