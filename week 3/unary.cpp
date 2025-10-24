#include<iostream>
using namespace std;
class unary
{
	private:
		int x,y,z;
	public:
		void get()
		{
			x=10;
			y=-20;
			z=-30;
		}
		void show()
		{
			cout<<"x="<<x<<"\n";
			cout<<"y="<<y<<"\n";
			cout<<"z="<<z<<"\n";
		}
		void operator-()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	unary u;
	u.get();
	-u;
	u.show();
	return 0;
}




