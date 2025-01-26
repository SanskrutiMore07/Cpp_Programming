using namespace std;
#include<iostream>
#include<conio.h>

class Calc
{
private:
    int N1,N2;
    void Addition()
    {

        cout<<"\n Inside private member function Addition "<<endl;
        Sum = N1 + N2;
    }
     void Subtraction()
    {

        cout<<"\n Inside private member function Subtraction "<<endl;
        Sub = N1 - N2;
    }
public:
    int Sum,Sub;

    Calc()
    {

        N1=N2=Sum=Sub=0;
        cout<<"\n Inside Default Constructor!!!"<<endl;
    }
    Calc(int No1,int No2)
    {

        N1=No1;
        N2=No2;
        Sum=Sub=0;
        cout<<"\n Inside Parameterized Constructor!!!";
    }

    Calc(Calc &Ref)                                  /// Copy Constructor
        {
                this->N1  = Ref.N1;
                this->N2  = Ref.N2;

                this->Sum = Ref.Sum;
                this->Sub = Ref.Sub;

                cout << "\n Inside Copy Constructor!!!" << endl;
        }

        ~Calc()
        {
            cout<<"\n Inside Destructor"<<Sub<<endl;
        }

    void Set_Values()
    {
        cout<<"\n Enter 2 numbers :";
        cin>>N1>>N2;
    }
   void Calculate()
   {
       cout<<"\n Inside public Member Function Calculate "<<endl;
       getch();
       Addition();
       Subtraction();
       getch();
   }
};
int main()
{
        Calc Obj1;

        Obj1.Set_Values();
        Obj1.Calculate();
        cout << "\n Addition for Obj1    => " << Obj1.Sum << endl;
        cout << "\n Subtraction for Obj1 => " << Obj1.Sub << endl;

        Calc Obj2(51,21);
        Obj2.Calculate();
        cout << "\n Addition for Obj2    => " << Obj2.Sum << endl;
        cout << "\n Subtraction for Obj2 => " << Obj2.Sub << endl;

        Calc Obj3(Obj2);
        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;
        getch();
        Obj3.Set_Values();
        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;
        getch();
        Obj3.Calculate();
        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;
        getch();

        cout << "\n Back in Main() \n Thanks Students !!!" << endl;

        getch();
        return 0;
}
