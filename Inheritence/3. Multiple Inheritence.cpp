#include<iostream>
#include<string>
using namespace std;
class function
{
    public:
    void father()
    {
        cout<<"This is Father"<<endl;
    }
};

class function_2
{
    public:
    void mother()
    {
        cout<<"This is Mother"<<endl;
    }    
};

class Person : public function_2 , public function
{
    int ID;
    string name;
};

int main()
{
    Person p;
    p.father();
    p.mother();
    return 0;
}