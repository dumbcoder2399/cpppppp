#include <iostream>
extern "C"
{
    #include "addnum.h"
}


using namespace std;

class MYCLASS
{
    public:
    void callfunc(int x,int y)
    {
        cout<<addnumbers(x,y)<<endl;
    }
};

int main()
{
    MYCLASS mc;
    mc.callfunc(2,5);
    return 0;
}
