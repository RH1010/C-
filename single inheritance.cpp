#include<iostream>
using namespace std;

class Account{
public:
    float salary=60000;
};
class programmer : public Account{
public:
    float bonus=5000;
};
int main(){
    programmer p1;
    cout<< "Salary: "<<p1.salary<<endl;
    cout<< "Salary: "<<p1.bonus<<endl;
    return 0;
}
