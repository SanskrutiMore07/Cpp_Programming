///INLINE FUNCTION///

#include<iostream>
using namespace std;


    inline int mul(int x,int y)
    {
        return(x*y);
    }
    inline int div(int p,int q)
    {
        return(p/q);
    }

int main()
{
    int a=10;
    int b=80;

    cout<<mul(a,b)<<"\n";
    cout<<div(a,b)<<"\n";

    return 0;
}

