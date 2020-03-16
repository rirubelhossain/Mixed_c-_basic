#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name = "rubel";
    try{

        cout<<"try"<<endl;
        throw name;
    }
    catch (int a)
    {
        cout<<"The exception value is = "<<a<<endl;
    }
    catch (double a)
    {
        cout<<"The exception value is = "<<a<<endl;
    }
    catch (string a)
    {
        cout<<"The exception value is = "<<a<<endl;
    }
    return(0);
}
