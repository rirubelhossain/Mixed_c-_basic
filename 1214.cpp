#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    int array[100];
    int n;

    float f,avg;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;


        for(int i=0;i<n;i++)
        {
            cin>>array[i];
            sum=sum+array[i];
        }
        //cout<<sum<<endl;
        avg=(float)((float)sum/n);
        //cout<<avg;
        int count=0;
        for(int i=0;i<n;i++)
        {
        if(array[i]>avg)
          {
            count++;
          }


        }
        f=(((float)count*100)/n);





        printf("%.3f",f);
        cout<<"%"<<endl;

    }
}
