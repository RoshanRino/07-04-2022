#include<iostream>
#include<string>
using namespace std;
class Person
{
    int ID;
    string name;
    public:
    
    Person(int a, string b)
    {
        this->ID = a;
        this->name = b;
    }
    
    void printdata()
    {
        cout<<"Name : "<<name<<endl<<"ID : "<<ID<<endl;
    }    
};

int main()
{
    Person p(10,"bob");
    p.printdata();
    return 0;
}