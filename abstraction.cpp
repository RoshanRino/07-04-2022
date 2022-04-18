#include<iostream>
using namespace std;
class time
{
    short data=0;
public:
    time(int a , int b)
    {
        data=a;
        data<<=6;
        data+=b;
    }
    void printData()
    {
        cout<<(data>>6)<<" : "<<data%64;
    }
};
int main()
{
    time t(12,55);
    t.printData();
    return 0;
}
