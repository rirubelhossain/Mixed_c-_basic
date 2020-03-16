#include <bits/stdc++.h>
using namespace std;

bool isfunction(int a)
{
    if(a % 2 == 0)
    {
        return(true);
    }
    else{

        return(false);
    }
}

int main()
{
    int a ;

    cin>> a ;

    cout<<isfunction(a);

    return(0);
}
