#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int i , j , k , m ;

    cin>>m ;
    int array[100];
    int a , b ;
    i = 0 ;
    while(m != 0 )
    {
        a = m % 2 ;
        array[i] = a ;
        ++i;
        m /= 2 ;
    }
    for(int l = i ; l >= 0 ; --l)
        printf("%d", array[l]);

    return(0);
}
