#include <bits/stdc++.h>

using namespace std;

void positive(int a)
{
    cout<<a<<endl;

    if(a < 1)
        throw a;
    cout<<"next line print";
}
int main()
{
    try{

        positive(-5);
        positive(5);
        positive(50);
    }
    catch(int e)
    {
        cout<<"this is exception"<<e<<endl;
    }

    return(0);
}
