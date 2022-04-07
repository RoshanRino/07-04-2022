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
        cout<<"Enter Name"<<endl;
        cin>>name;
    }
    
    void printdata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<ID<<endl<<endl;
    }
};

int main()
{
    int number;
    cout<<"Enter Number of People : "<<endl;
    cin>>number;
    Person p[number];
    for(int i=1;i<=number;i++)
        p[i].getdata();
    for(int i=1;i<=number;i++)
        p[i].printdata();
    return 0;
}