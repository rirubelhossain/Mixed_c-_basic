#include <bits/stdc++.h>

using namespace std;

void positive(int a)
{
    cout<<a<<endl;
    try{

        if(a < 1) throw a ;
    }
    catch (int e){
        cout<<"that's exaption value";
        cout<<e<<endl;
    }
}

int main()
{
    positive(6);
    positive(-6);
    positive(6);
    return(0);
}
