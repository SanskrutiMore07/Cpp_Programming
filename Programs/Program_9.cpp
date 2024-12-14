#include<iostream>
using namespace std;

class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);
    void putdata()
    {
        cout<<"number :"<<number<<endl;

        cout<<"cost :"<<cost<<endl;
    }
};
void item :: getdata(int a,float b)
{
    number=a;
    cost=b;
}
int main()
{
    item x;
    cout<<"object x "<<endl;
    x.getdata(100,299.70);
    x.putdata();

    item y;
    cout<<"object y "<<endl;
    x.getdata(200,399.70);
    x.putdata();

    return 0;

}
