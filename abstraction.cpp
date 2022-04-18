#include<iostream>
using namespace std;
class time
{
    short data;
public:
    time(int a , int b)
    {
        data=(a<<6)+b;
    }
    void printData()
    {
        cout<<(data>>6)<<" : "<<data%64<<endl;
    }
};
int main()
{
    time t(12,55);
    time t2(10,12);
    t.printData();
    t2.printData();
    return 0;
}
