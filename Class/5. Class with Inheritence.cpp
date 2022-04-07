#include<iostream>
#include<string>
using namespace std;
class function
{
    public:
    void what()
    {
        cout<<"This is a Person";
    }
};
class Person : public function
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