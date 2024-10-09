#include<iostream>
using namespace std;
int fact(int n)         //Recursive function with Factorial
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
        return n*fact(n-1);
}
int main()
{
    int n,f;
    cout<< "Enter the value: ";
    cin>>n;
    f=fact(n);
    cout<< "Factorial: "<<f<<endl;
}

