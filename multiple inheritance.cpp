/*
#include<iostream>
using namespace std;

class base1{
public:
    void A1(){
    cout<< "123"<<endl;
    }
};
class base2{
public:
    void A2(){
    cout<< "456"<<endl;
    }
};
class child:public base1,public base2{
public:
    void A3(){
    cout<< "1010"<<endl;
    }
};
int main(){
    child d1;
    d1.A1();
    d1.A2();
    d1.A3();
    return 0;
}
*/

#include<iostream>
using namespace std;

class base1{
public:
    void A1(){
    cout<< "123"<<endl;
    }
};
class base2{
public:
    void A1(){
    cout<< "456"<<endl;
    }
};
class child:public base1,public base2{
public:
    void A3(){
    cout<< "1010"<<endl;
    }
};
int main(){
    child d1;
    d1.A1();    // this is ambiguous problem
    d1.A1();
    d1.A3();
    return 0;
}

