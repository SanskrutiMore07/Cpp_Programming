#include<iostream>
using namespace std;
#include<conio.h>

class Calc
{
private:
    int N1,N2;
public:
    int sum,sub,mult;

    Calc()
    {
        N1=N2=mult=sum=sub=0;
        cout<<"Inside Default Constructor ....!!! "<<endl;
    }
    Calc(int No1, int No2)
    {
        N1=No1;
        N2=No2;
        mult=sum=sub=0;
        cout<<"Inside Parameterized Constructor ....!!!"<<endl;
    }
    Calc( Calc &ref)
    {
        this->N1 = ref.N1;
        this->N2 = ref.N2;
        this->sum = ref.sum;
        this->sub = ref.sub;
        this->mult = ref.mult;
        cout<<"Inside Copy Constructor ....!!! "<<endl;
    }

    void set_values()
    {
        cout<<"Enter two numbers : "<<endl;
        cin>>N1>>N2;
    }
    void Addition()
    {
        sum = N1+N2;
    }

     void Subtraction()
    {
        sub = N1-N2;
    }
    void Multiplication()
    {
        mult = N1*N2;
    }

};

int main()
{
    Calc obj1;

    obj1.set_values();
    obj1.Addition();
    obj1.Subtraction();
    obj1.Multiplication();

    cout<<"\n Addition for obj1 =>"<<obj1.sum<<endl;
    cout<<"\n Subtraction for obj1 =>"<<obj1.sub<<endl;
    cout<<"\n Multiplication for obj1 =>"<<obj1.mult<<endl;



    Calc obj2(51,21);

    obj2.Addition();
    obj2.Subtraction();
    obj2.Multiplication();

    cout<<"\n Addition for obj2 =>"<<obj2.sum<<endl;
    cout<<"\n Subtraction for obj2 =>"<<obj2.sub<<endl;
    cout<<"\n Multiplication for obj2 =>"<<obj2.mult<<endl;

    getch();

    Calc obj3(obj2);

    cout<<"\n Addition for obj3 =>"<<obj3.sum<<endl;
    cout<<"\n Subtraction for obj3 =>"<<obj3.sub<<endl;
    cout<<"\n Multiplication for obj1 =>"<<obj3.mult<<endl;

    getch();


    obj3.set_values();
    cout<<"\n Addition for obj3 =>"<<obj3.sum<<endl;
    cout<<"\n Subtraction for obj3 =>"<<obj3.sub<<endl;
    cout<<"\n Multiplication for obj3 =>"<<obj3.mult<<endl;

    getch();

    obj3.Addition();
    obj3.Subtraction();
    obj3.Multiplication();

    cout<<"\n Addition for obj3 =>"<<obj3.sum<<endl;
    cout<<"\n Subtraction for obj3 =>"<<obj3.sub<<endl;
    cout<<"\n Multiplication for obj3 =>"<<obj3.mult<<endl;

    getch();

    cout<<"Back to main ....\n Thanks!!!!"<<endl;

    getch();
    return 0;

}
