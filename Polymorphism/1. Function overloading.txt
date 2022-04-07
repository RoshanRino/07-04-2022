#include<iostream>
#include<string>
using namespace std;
class Person
{
    int ID,salary;
    string name;
    public:
    Person(int a,string b,int c)
    {
        this->ID=a;
        this->name=b;
        this->salary=c;
    }
    int addsal()
    {
        return this ->salary;
    }    
    int addsal(Person p1)
    {
        return this ->salary+p1.salary;
    }
    int addsal(Person p1,Person p2)
    {
        return this ->salary+p1.salary+p2.salary;
    }
        int addsal(Person p1,Person p2,Person p3)
    {
        return this ->salary+p1.salary+p2.salary+p3.salary;
    }
};

int main()
{
    Person p1(1,"Bob",1000) ,p2(2,"Bog",2000),p3(3,"Big",3000),p4(4,"bong",4000);
    cout<<p1.addsal()<<endl;
    cout<<p1.addsal(p2)<<endl;
    cout<<p1.addsal(p2,p3)<<endl;
    cout<<p1.addsal(p2,p3,p4)<<endl;
    return 0;
}