#include<iostream>
#include<string>
using namespace std;
class Person
{
    int ID;
    string name;
    public:
    void son()
    {
        cout<<"This is son"<<endl;
    }
};
class Mother: public Person
{
};
    
class Father: public Person
{
};

    
int main()
{
    Mother m;
    Father f;
    m.son();
    f.son();
    return 0;
}