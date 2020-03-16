#include <bits/stdc++.h>

using namespace std;
class base{

};

class drive : public base{

};

int main()
{
    base b ;
    drive d ;


    try{

        throw b ;

    }
    catch(drive e)
    {
        cout<<" drive exception"<<endl;
    }
    catch(base e)
    {
        cout<<" base exception"<<endl;
    }



    return(0);
}
