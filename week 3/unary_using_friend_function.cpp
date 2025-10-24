#include<iostream>
using namespace std;
class unary
{
	private:
		int x,y,z;
	public:
		void get()
		{
			x=50;
			y=-250;
			z=-300;
		}
		void show()
		{
			cout<<"x="<<x<<"\n";
			cout<<"y="<<y<<"\n";
			cout<<"z="<<z<<"\n";
		}
		friend void operator-(unary &u);
};
void operator-(unary &u)
{
	u.x=-u.x;
	u.y=-u.y;
	u.z=-u.z;
}
int main()
{
	unary u;
	u.get();
	-u;
	u.show();
	return 0;
}






