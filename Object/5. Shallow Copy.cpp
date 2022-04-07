#include<iostream>
#include<string>
using namespace std;
class Person
{
    int ID;
    string name;
    public:
    int *ad=&ID;
    
    Person(int a, string b)
    {
        this->ID = a;
        this->name = b;
    }
    
    void printdata()
    {
        cout<<"Name : "<<name<<endl<<"ID : "<<*ad<<endl;
    }    
};

int main()
{
    Person p1(10,"bob"),p2(20,"Bog");
    p1.printdata();
    p2.printdata();
    p2=p1;
    cout<<endl;
    p1.printdata();
    p2.printdata();
    cout<<endl;
    *p2.ad=100;
    p1.printdata();
    return 0;
}