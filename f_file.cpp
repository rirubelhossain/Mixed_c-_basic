#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream open("file_name");

    if(open.fail())
    {
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }

    open.close();
    return (0);
}
