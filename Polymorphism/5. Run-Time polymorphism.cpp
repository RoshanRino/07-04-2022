#include<iostream>
using namespace std;
class Father
{
    public:
    virtual void what()
    {
        cout << "I am Father"<<endl;
    }
    void whatm()
    {
        cout<< "I am Father"<<endl;
    }
};    
class Son : public Father
{
    public:
    void what()
    {
        cout<< "I am Son"<<endl;
    }
    void whatm()
    {
        cout<< "I am Son"<<endl;
    }
};

int main()
{
    Father *f;
    Son s;
    f=&s;
    f->what();
    f->whatm();
    
    return 0;
}