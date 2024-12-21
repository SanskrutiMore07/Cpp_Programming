#include<iostream>
using namespace std;

class Test{
public:
    Test(){cout<<"\n constructor Executed";}
    ~Test(){cout<<"\n Destructer Executed";}
};
main()
{
    Test t;
    return 0;
}
