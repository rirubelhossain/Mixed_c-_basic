#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("file_90.txt");

    if(out)
        cout<<"can't open \n";
    else {

        out<<"i am rubel hossain\n";
        out.close();
    }

    return(0);
}
