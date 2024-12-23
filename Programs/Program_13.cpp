//copy constructor 01
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class Teacher
{
    public:
    string name;
    string dept;
    string sub;
    double salary;

    void changdept(string NewDept){
    dept = NewDept;
    }
    void setsalary(double s)
    {
        salary=s;
    }
    double getsalary()
    {
        return salary;
    }

    void getdata()
    {
    cout<<"Name of Teacher : "<<name<<endl;
    cout<<"Department of Teacher : "<<dept<<endl;
    cout<<"Subject of Teacher : "<<sub<<endl;
    cout<<"Salary of Teacher : "<<salary<<endl;
    }

};
int main()
{
    Teacher t1;
    t1.name="Sayali More";
    t1.dept="Computer Science";
    t1.sub="c++";
    t1.salary=(25000);
    t1.getdata();
    getch();

    Teacher t2(t1);
    t2.getdata();

    return 0;
}


