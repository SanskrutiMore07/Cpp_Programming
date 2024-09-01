///WAP which accept 2 integers from user and display its addition and subtraction.cpp

using namespace  std;
#include<iostream>

class maths
{
public:
    int No1,No2,ANS;

    void  Add();
    void  Sub();

};
void maths::Add()
{
    ANS=No1+No2;

}
void maths::Sub()
{
    ANS=No1-No2;
}
int main()
{
    maths obj1,obj2;

    obj1.No1=10;
    obj1.No2=20;

    obj2.No1=20;
    obj2.No2=10;

    obj1.Add();
    cout<<obj1.ANS <<endl;

    obj2.Sub();
    cout<<obj2.ANS;
    return 0;
}
