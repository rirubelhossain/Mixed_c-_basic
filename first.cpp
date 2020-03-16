#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int a , b ;

    int i ;

    for(int i = 0 ; i < 10; ++i)
    {
        a = 0 + rand() % 128 ;
        cout<<a<<endl;
    }
    return(0);
}
