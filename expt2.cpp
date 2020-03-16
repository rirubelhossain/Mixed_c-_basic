#include <bits/stdc++.h>
#include <string>

using namespace std;

class expt{
    int a ;
    string name;

public:

    expt(int id , string nm)
    {
        a = id ;
        name = nm ;
    }
    void print()
    {
        cout<<"error id : "<<a<<"--"<<name<<endl;
    }

};
void positive(int a )
{

    cout<<a<<endl;
    try{

        if(a < 1) throw expt(1,"not a positive number");
    }
    catch (expt e)
    {
        e.print();
    }
}


int main()
{
    positive(5);
    positive(-5);
    positive(50);

    return(0);
}
