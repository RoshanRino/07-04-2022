#include<iostream>
using namespace std;
class Father
{
    public:
    void what()
    {
        cout << "I am Father"<<endl;
    }
};    
class Son : public Father
{
    public:
    void what()
    {
        cout<< "I am Son"<<endl;
    }
};

int main()
{
    Father f;
    Son s;
    s.what();
    f.what();
    return 0;
}