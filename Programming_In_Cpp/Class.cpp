#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
    char name[30];
    int age;

public:
    void getdata(void);
    void display(void);

};
void Person::getdata(void)
{
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter age :";
    cin>>age;

}
void Person::display(void)
{

    cout<<"\n Name: "<<name;
    cout<<"\n Age: "<<age;
}
int main()
{
    Person P;
    P. getdata();
    P.display();

    getch();
    return 0;
}
