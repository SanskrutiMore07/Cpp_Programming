using namespace std;
#include<iostream>
#include<conio.h>

int gNum =21;

void Fun()
{
    int i =50;
    static int j=101;

    cout<<"\n value of Non static variable ="<<i;
    cout<<"\n value of static variable ="<<j;
    cout<<"\n value of Global variable ="<<gNum;

    i++;
    j++;
    gNum++;

    return;

}
int main()
{

    Fun();
    Fun();

    gNum=500;
    Fun();
    getch();
}
