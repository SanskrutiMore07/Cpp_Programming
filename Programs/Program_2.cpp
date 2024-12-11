#include<iostream>
using namespace std;

class student
{
private:
    char name[30];
    int roll_no;
    int phone_no;

public:
    void get_data();
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Roll Number :"<<roll_no<<endl;
        cout<<"Phone Number :"<<phone_no<<endl;
    }
};

void student :: get_data()
{
    cout<< "Enter Name Of Student :";
    cin>>name;
    cout<<"Enter Roll Number Of Student :";
    cin>>roll_no;
    cout<<"Enter phone Number Of Student :" ;
    cin>>phone_no;
}

int main()
{
    student s;
    s.get_data();
    s.display();
    return 0;
}

