#include<iostream>
using namespace std;
class area
{
	protected:
		void clculatearea(int l, int b)
		{
			cout<<"area of rectangle="<<l*b<<"\n";
		}
};
class perimeter
{
	protected:
		void clculatperimeter(int l, int b)
		{
			cout<<"perimeter of rectangle="<<2*(l+b)<<"\n";
		}		
};
class rectangle:public area,public perimeter
{
	public:
		int l,b;
		void result()
		{
			cout<<"Enter l,b values:";
			cin>>l>>b;
			clculatearea(l,b);
			clculatperimeter(l,b);
		}
};
int main()
{
	rectangle r;
	r.result();
	return 0;
}


