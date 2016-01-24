 #include<iostream>
using namespace std;
 
class A{
private:
    int a;
    public:
    A()
    {cout<<"empty cons-a"<<endl;}
    };
    class B:virtual public A{
public:
    int b;
    B()
    {cout<<"empty cons-b"<<endl;}
    };
    class C:virtual public B{
public:
    int c;
    C()
    {cout<<"empty cons-c"<<endl;}
    };
    class D:public B,public C{
public:
    int d;
    D()
    {cout<<"empty cons-d"<<endl;}
    };
 
int main()
{
    D d1;
    return 0;
}