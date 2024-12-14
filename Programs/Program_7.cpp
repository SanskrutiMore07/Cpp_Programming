///use of new and delete operator///

#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    int *arr;
    int size;

    cout<<"Enter the size of integer array :";
    cin>>size;

    cout<<"Creating an array of size "<<size<<"...";
    arr=new int [size];

    cout<<"\n Dynamic allocation of memory for array arr is successful.";

    delete arr;
    getch();
    return 0;
}
