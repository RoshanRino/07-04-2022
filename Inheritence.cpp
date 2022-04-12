#include<iostream>
using namespace std;
class Organization
{
public:
    void about()
    {
        cout<<"ZoHO Corp"<<endl;
    }
};
class Branch : public Organization
{
public:
    void about()
    {
        cout<<"Chennai Branch"<<endl;
        Organization::about();
    }

};
class Employee : public Branch
{
    int ID;
    string name;
public:
    Employee(int a,string b)
    {
        ID=a;
        name=b;
    }
    void about()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<ID<<endl;
        Branch :: about();
    }

};
int main()
{
    Employee Emp(213,"BoB");
    Branch branch;
    Organization org;
    org.about();
    cout<<endl<<endl;
    branch.about();
    cout<<endl<<endl;
    Emp.about();
    return 0;
}
