#include<iostream>
#include<string>
using namespace std;
class functionByme
{
    public:
    void what()
    {
        cout<<"This is a Person";
    }
};
class Person : public functionByme
{
    int ID;
    string name;
};

int main()
{
    Person p;
    p.what();
    return 0;
}
