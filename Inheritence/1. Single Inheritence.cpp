#include<iostream>
#include<string>
using namespace std;
class functionbyme
{
    public:
    void what()
    {
        cout<<"This is a Person";
    }
};
class Person : public functionbyme
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
