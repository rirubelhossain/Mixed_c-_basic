#include <iostream>
#include <cstdio>

using namespace std;

class rubel_base_class{

public:
    int rubel_age = 1000 ;
    int rubel_weight = 1000 ;
    int get();
};

class tasin_drived_class : public rubel_base_class{
    public:
    void function()
    {
        cout<<rubel_age<<endl;
        cout<<rubel_weight<<endl;
    }
    int get()
    {
        return(rubel_age*rubel_weight);
    }
    tasin_drived_class()
    {
        cout<<rubel_age<<endl;
        cout<<rubel_weight<<endl;
    }
};
int main()
{
    tasin_drived_class info ;
    info.rubel_age = 10 ;
    info.rubel_weight = 10 ;
    info.function();
    cout<<info.get()<<endl;;

    return(0);
}
