#include<iostream>
using namespace std;

int main()
{
    int A,B,C;

    cout<< "Enter The Value Of A,B,C:";
    cin>>A>>B>>C;
    {
        if (A>B)
        {
            if(A>C)
            {
                cout<<"A is greater";
            }
        }
    }
    if (B>A)
    {
        if(B>C)
        {
            cout<<"B is greater";
        }
    }
    else
    {
        cout<< "C is greater";
    }
    return 0;
}
