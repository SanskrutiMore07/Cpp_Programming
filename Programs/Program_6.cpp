#include<iostream>
using namespace std;

int m=10;                               ///global m
int main()
{
    int m=20;                           ///m redeclared , local to main
    {
        int k=m;
        int m=30;                       ///m declared again
                                        ///local to inner block

        cout<< "\n we are in inner block "<<endl;
        cout<< "k= "<<k<<"\n";          ////20
        cout<< "m= "<<m<<"\n";          ////30
        cout<<"::m= "<<::m<<"\n" ;      ////::m=10

    }

    cout<< "\n we are in outer block " <<endl;
    cout<< "m= "<<m<<"\n";                 ////20

    cout<<"::m= "<<::m<<"\n" ;              /////10

    return 0;
}
