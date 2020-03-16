#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
    int a , b , m , n , d ;

    int array[100], counter ;

    while(scanf("%d%d", &n,&m) != EOF)
    {
        counter = 0 ;
        for(int i = 0 ; i < n ; ++i)
        {
            scanf("%d", &array[i]);
        }
        for(int i = 0 ; i < n ; ++i)
        {
            a = array[i+1] - array[i];
            a = fabs(a);
            a = (int)a;

            if(a == m)
            {
                ++counter;
            }
        }
        if(counter == (n-1))
        {
            printf("%d\n",m);
        }
        else if( counter == 0)
        {
            printf("0\n");
        }
    }
    return(0);
}
