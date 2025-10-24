#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"class a constructor is invoked"<<"\n";
		}
		~A()
		{
			cout<<"class a destructor is invoked"<<"\n";
		}
};
class B: public A
{
	public:
		B()
		{
			cout<<"class b constructor is invoked"<<"\n";
		}
		~B()
		{
			cout<<"class b destructor is invoked"<<"\n";
		}
};
class C: public A
{
	public:
		C()
		{
			cout<<"class c constructor is invoked"<<"\n";
		}
		~C()
		{
			cout<<"class c destructor is invoked"<<"\n";
		}
};
int main()
{
	B b;
	C c;
	return 0;
}




