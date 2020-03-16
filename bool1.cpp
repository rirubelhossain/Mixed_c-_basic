#include <bits/stdc++.h>
#include <cstdlib>


using namespace std;

int main()
{
    int a ;

    a = rand() % 10  ;
    cout<<a <<endl;

    int b ;

    b = rand() % 10 ;

    cout<<b<<endl;

    for(int i = 1 ; i < 10 ; ++i)
    {
        b = rand() % 10 ;
        cout<<b<<endl;

    }
    return(0);
}
