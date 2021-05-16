#include<iostream>
using namespace std;

int main()
{
    int age=0;
    cout<<"What is your age"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"Oh! you can vote"<<endl;
    }
    else
    {
        cout<<"You can vote after some more years!"<<endl;
    }
    return 0;
}
