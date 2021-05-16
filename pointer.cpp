#include<iostream>
using namespace std;

int main()
{
    int data[5];
    cout<<"Enter 5 numbers "<<endl;
    for(int i=0;i<5;++i)
    {
        cin>>data[i];
    }

    cout<<"The numbers entered are: ";

    for(int i=0;i<5;++i)
    {
        cout<<*(data +i)<<" ";
    }
    return 0;
}
