#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int a)
    {
        real=a;
        img=0;
    }
    Complex(int a,int b)
    {
        real=a;
        img=b;
    }
    Complex operator + (Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    Complex operator * (Complex c)
    {
        Complex temp;
        temp.real=real*c.real - img*c.img;
        temp.img=real*c.img + img*c.real;
        return temp;
    }    
    void print()
    {
        cout<<real<<" "<<img<<"i"<<endl;
    }
};

int main()
{
    Complex a(5,4),b(10,2),sum,prod;
    sum=a+b;
    prod=a*b;
    sum.print();
    prod.print();    
    
}