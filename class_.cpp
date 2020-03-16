#include <iostream>
#include <cstdio>

using namespace std;
class student
{
public:
    int a ;
    void print();//{ cout<< a<<endl;}
};

class drived:public student
{
    void print(){ cout << a <<endl;}
};

int main()
{
    drived info;
    info.a = 524258 ;
   /// info.reg = 837414;
   info.print();

    return(0);
}
