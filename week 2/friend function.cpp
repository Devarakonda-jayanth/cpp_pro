#include<iostream>
using namespace std;
class triangle
{
	private:
		int b,h;
	void get()
	{
		b=5;
		h=6;
	}
	friend void area();
};
void area()
{
	triangle a;
	a.get();
	cout<<"area of triangle is: "<<(0.5)*a.b*a.h;
}
int main()
{
	area();
}
