///Average Of Two Numbers///

#include<iostream>
using namespace std;

int main()
{
    float No1,No2,Sum,Average;

    cout<< " Enter Two Numbers : ";
    cin>> No1;
    cin>> No2;

    Sum = No1+No2;
    Average= Sum/2;

    cout<<"Sum Of Given Numbers Is : "<<Sum<<endl;
    cout<<"Average Of Given Numbers Is : "<<Average<<endl;

    return 0;

}
