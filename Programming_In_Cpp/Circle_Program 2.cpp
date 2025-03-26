#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
public:

    float Rad,Area,Circum;
    Circle();
    Circle(float R);
    Circle(Circle &);

    void Area_Circle();
    void Circumferance_Circle();
    void Display_Information();

    ~Circle();

private:
    float PI;
};
Circle::Circle()
{
    Rad=Area=Circum=0;
    cout<<"\n Inside Default Constructor .....";
}
Circle::Circle(float R)
{
    cout<<"\n Inside Parameterized Constructor .....";

    Rad = R;
    Area_Circle();
    Circumferance_Circle();
    Display_Information();
}
Circle::Circle(Circle &ref)
{
    cout<<"\n Inside Copy Constructor .....";
    Rad = ref.Rad;
    Area = ref.Area;
    Circum = ref.Circum;
}
void Circle :: Area_Circle()
{
    PI= 3.14;
    Area = PI * Rad *Rad;
}
void Circle :: Circumferance_Circle()
{
    PI = 3.14;
    Circum = 2*PI*Rad;
}
void Circle :: Display_Information()
{
    cout<<"\n Area Of Circle :"<<Area;
    cout<<"\n Circumferance Of Circle :"<<Circum ;
}
Circle :: ~Circle()
{
    cout<<"\n Destructor Is Called...";
}
int main()
{
    Circle c1;
    getch();

    Circle c2(5);
    c2.Area_Circle();
    c2.Circumferance_Circle();
    getch();

    Circle c3(c2);
    c3.Area_Circle();
    c3.Circumferance_Circle();
    c3.Display_Information();
    getch();
}
