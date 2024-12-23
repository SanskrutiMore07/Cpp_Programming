#include<iostream>
#include<string>
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

};
int main()
{
    Teacher t1;
    t1.name="Sayali More";
    t1.dept="Computer Science";
    t1.sub="c++";
    t1.salary=(25000);

    cout<<"Name of Teacher : "<<t1.name<<endl;
    cout<<"Department of Teacher : "<<t1.dept<<endl;
    cout<<"Subject of Teacher : "<<t1.sub<<endl;
    cout<<"Salary of Teacher : "<<t1.salary<<endl;

    Teacher t2(t1);



    return 0;
}

