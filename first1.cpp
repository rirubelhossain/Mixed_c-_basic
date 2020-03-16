#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    FILE *name ;

    name = fopen("test.txt", "W");


    free(name);

    return(0);
}
