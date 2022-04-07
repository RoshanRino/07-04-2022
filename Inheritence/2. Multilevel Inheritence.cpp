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
class function_2 : public function
{
};
class Person : public function_2
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