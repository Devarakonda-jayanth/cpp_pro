#include<iostream>
using namespace std;
class add
{
	private:
		int a,b;
	public:
	void get(int x=1000,int y=2000)
	{	
		a=x;
		b=y;
	}
	void show()
	{
		cout<<"the sum of two numbers: "<<a+b<<endl;
	}
};
int main()
{
	add a;
	a.get();
	a.show();
	a.get(50);
	a.show();
	a.get(100,250);
	a.show();
	return 0;
}
