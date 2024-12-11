#include<iostream>
using namespace std;

class Maths
{
public:
    int iNO1,iNO2,iANS;

    void Add();
    void Sub();
};
void Maths :: Add()
{
    iANS=iNO1 + iNO2;
}
void Maths :: Sub()
{
    iANS=iNO1 - iNO2;
}
int main()
{
    Maths obj1,obj2;

    obj1.iNO1=10;
    obj1.iNO2=20;

    obj2.iNO1=40;
    obj2.iNO2=20;

    obj1.Add();
    cout<<obj1.iANS <<endl;

    obj2.Sub();
    cout<<obj2.iANS;

    return 0;
}
