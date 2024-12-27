//static data members

#include<iostream>>
#include<conio.h>
using namespace std;

class item{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count ++;
    }
    void getcount(void)
    {
        cout<<"count : ";
        cout<<count<<"\n";
    }
};
int item :: count;

int main()
{
    item a,b,c,d,g;
    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();
    g.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    d.getdata(400);
    g.getdata(500);


    cout<<"After reading data"<<"\n";

    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();
    g.getcount();


    return 0;

}
