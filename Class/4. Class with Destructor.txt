#include<iostream>
#include<string>
using namespace std;
class Person
{
    int ID;
    string name;
    public:
    Person()
    {
        cout<<"Enter an ID : "<<endl;
        cin>>ID;
        cout<<endl<<"Enter Name"<<endl;
        cin>>name;
    }
    
    ~Person()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<ID<<endl;
    }
};

int main()
{
    Person p;
    return 0;
}