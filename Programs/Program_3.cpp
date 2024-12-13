#include<iostream>
using namespace std;

class student
{
private:
    char name[40];
    int roll_no;
    long phone_no;

public:
    void get_data();
    void display();

};

void student :: get_data()
{
    cout<< "Enter Name Of Student : ";
    cin>>name;
    cout<<"Enter Roll Number Of Student : ";
    cin>>roll_no;
    cout<<"Enter phone Number Of Student : " ;
    cin>>phone_no;
}
void student :: display()
{
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<roll_no<<endl;
        cout<<"Phone Number : "<<phone_no<<endl;
}
int main()
{
    student s;
    s.get_data();
    s.display();
    return 0;
}


