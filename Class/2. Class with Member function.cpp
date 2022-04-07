#include<iostream>
#include<string>
using namespace std;
class Person
{
    int ID;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter an ID : "<<endl;
        cin>>ID;
        cout<<endl<<"Enter Name"<<endl;
        cin>>name;
    }
    
    void printdata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<ID<<endl;
    }
};

int main()
{
    Person p;
    p.getdata();
    p.printdata();
    return 0;
}