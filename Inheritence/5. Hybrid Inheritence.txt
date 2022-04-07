#include<iostream>
#include<string>
using namespace std;
class function_3
{
    public:
    void Gfather()
    {
        cout<<"This is Grand Father"<<endl;
    }    
};
class function : public function_3
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
    p.Gfather();
    return 0;
}