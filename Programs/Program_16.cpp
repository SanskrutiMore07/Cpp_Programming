#include<iostream>
using namespace std;

class employee
{
    char name [30];
    float age;
public:
    void getdata();
    void putdata();
};
void employee :: getdata()
{
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Age :";
    cin>>age;
}
void employee :: putdata()
{
    cout<<"Name: "<<name<<"\n";
    cout<<"Age: "<<age<<"\n";
}
const int size = 3;
int main()
{
    employee manager [size];
    for(int i=0;i<size;i++)
    {
        cout<<"\n Details of manager "<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        cout<<"\n manager"<<i+1<<"\n";
        manager[i].putdata();

    }
    return 0;
}
