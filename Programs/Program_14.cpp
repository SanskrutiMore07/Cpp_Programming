#include<iostream>
#include<string>
using namespace std;
#include<conio.h>

class Student{
public:
    string name;
    double cgps;

    Student(string name,double cgps)
    {
        this -> name =name;
        this -> cgps =cgps;
    }
    Student(Student &obj)
    {
        this->name=obj.name;
        this->cgps=obj.cgps;
    }

    void getdata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Cgps : "<<cgps<<endl;
    }
};
int main()
{
    Student s1("Sayali More",8.9);
    s1.getdata();
    getch();
    Student s2(s1);
    s2.getdata();
    return 0;
}
