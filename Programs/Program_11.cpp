#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double cgps;

    Student(string name,double cgps)
    {
        this -> name =name;
        this -> cgps =cgps;
    }

    void getdata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Cgps : "<<cgps<<endl;
    }
};
int main()
{
    Student s("Sayali More",8.9);
    s.getdata();
}
