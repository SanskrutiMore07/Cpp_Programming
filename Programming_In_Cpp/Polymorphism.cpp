#include<iostream>
using namespace std;
class Add
{

void Add(int,int);
void Add(int,int,int);
};


 int main()
{
    int a,b,c,d,e;

    cout<<"\n Enter Two Numbers : ";
    cin>>a>>b;
    Add(a,b);

    cout<<"\n Enter Three Numbers : ";
    cin>>c>>d>>e;
    Add(c,d,e);
}

