#include<iostream>
#include<string>
using namespace std;
class Person
{
    int ID,salary;
    string name;
    public:
    Person()
    {
        cout<<"This is Person with No Arguments"<<endl;
    }      
    Person(int a)
    {
        cout<<"This is Person with 1 Argument"<<endl;
    }  
    public:
    Person(int a,string b)
    {
        cout<<"This is Person with 2 Arguments"<<endl;
    }    
    Person(int a,string b,int c)
    {
        cout<<"This is Person with 3 Arguments"<<endl;
    }
};

int main()
{
    Person p1,p2(2),p3(3,"Big"),p4(4,"bong",4000);
    return 0;
}