#include<iostream>
using namespace std;
int fibonacci (int n)
{
    if (n==0)
        {
            return 0;
        }
    else if (n == 1)
        {
            return 1;
        }
    else
        {
            return fibonacci(n-1)+fibonacci(n-2);
        }
}
int main ()
{
    int n,f;
    cout << "Enter the value: ";
    cin >> n;
    f = fibonacci(n);
    cout << "Fibonacci: "<<f;
}

//for any doubt below the second code execute


/*
//Program name: Fibonacci series
//0 1 1 2 3 5 8 13 21 34
#include<stdio.h>
int main()
{
    int i,num, t1=0,t2=1, nextterm=t1+t2;

    printf("Enter the number of terms: ");
    scanf("%d",&num);
    printf("Fibonacci series: %d %d ",t1,t2);

    for(i=3; i<=num; i++)
    {
        printf("%d ",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
    return 0;
}
*/
