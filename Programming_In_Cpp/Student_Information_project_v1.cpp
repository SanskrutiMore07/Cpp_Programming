#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class student
{
private:
    char name[40];
    int roll_no;
    long phone_no;
    float Per;

public:
    void  Add_Student();
    void Display_Student();
   /* void Update_Student();
    void  View_Student();*/

};

void student ::  Add_Student()
{
    cout<< "Enter Name Of Student : ";
    cin>>name;
    cout<<"Enter Roll Number Of Student : ";
    cin>>roll_no;
    cout<<"Enter phone Number Of Student : " ;
    cin>>phone_no;
    cout<<"Enter Percentage Of Student : " ;
    cin>>Per;
}
void student :: Display_Student()
{
        cout<<"\n Student Details Are =>";
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<roll_no<<endl;
        cout<<"Phone Number : "<<phone_no<<endl;
        cout<<"Percentage : "<<Per<<endl;

        cout<<"=======================================================";
}



int main()
{

   char ch = '\0';
   student s;
   for(;;)
   {
       cout<<"\n ****************** Fork Infosystem *********************\n";
       cout<<"=============================================================\n";
       cout<<"\n Choice => \n\t 1. Add Student \n\t 2. Display Student  \n\t 3. Update Student \n\t 4.View Student \n\t 5. Exit\n";
       cout<<"\n=================================================================\n";


      while(1)
      {
       int Choice;
       cout<<"Enter Your Choice : ";
       cin>>Choice;


       switch(Choice)
       {
       case 1:
        s.Add_Student();
        getch();
        break;

        case 2:

        s.Display_Student();
        getch();

        break;

       /* case 3:
        student su;
        su.Update_Student();
        getch();
        system("cls");
        break;*/

       /* case 4:
        student sv;
        sv.View_Student();
        getch();
        system("cls");
        break;*/

        case 5:
        fflush(stdin);
        cout<<"\n Are you sure do you want to Exit ???? (yes/No);";
        ch = getchar();

        if(ch =='y' || ch =='Y')
        {
            goto down;
        }

        fflush(stdin);
        system("cls");
        break;
       }
      }
      down:

          cout<<"\n************* Thanks for using *****************";
          cout<<"\n Press any key to exit application !!!!!\n";

          getch();
          return 0;

   }
}



