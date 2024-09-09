#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
public:
    float Rad,Area,Circum,PI;

    Circle()
    {
        cout<<"\n Inside Circle :: Default Constructor";
        Rad=0.0;Area=0.0;Circum=0.0;PI=3.14;
    }
    Circle(float R)
    {
        cout<<"\n Inside Circle :: Parameterized Constructor";
        Rad=R;Area=0.0;Circum=0.0;PI=3.14;
    }
    void Area_Of_Circle()
    {
        cout<<"\n Inside Area Of Circle Member Function";
        Area=PI*Rad*Rad;
    }
    void Circumference_Of_Circle()
    {
        cout<<"\n Inside Circumference Of Circle Member Function";
        Circum=2*PI*Rad;
    }
    ~Circle()
    {
        cout<<"\n Inside Circle:: Destructor =>"<<Rad;
    }
};
int main()
{
    Circle obj1(12.5);
    Circle obj2(7.5);

    obj1.Area_Of_Circle();
    obj1.Circumference_Of_Circle();

    obj2.Area_Of_Circle();
    obj2.Circumference_Of_Circle();


    cout<<"\n\n Circle 1 Details==>";
    cout<<"\n Radius        ="<<obj1.Rad;
    cout<<"\n Area          ="<<obj1.Area;
    cout<<"\n Circumference ="<<obj1.Circum;

    cout<<"\n\n Circle 2 Details==>";
    cout<<"\n Radius        ="<<obj2.Rad;
    cout<<"\n Area          ="<<obj2.Area;
    cout<<"\n Circumference ="<<obj2.Circum;

    getch();
    return 0;
}
