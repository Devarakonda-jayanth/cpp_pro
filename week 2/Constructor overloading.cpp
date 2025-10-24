#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
	public:
		rectangle()
		{
			length=10;
			breadth=20;
		}
		rectangle(int x)
		{
			length=x;
			breadth=x;
		}
		rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		int area()
		{
			return(length*breadth);
		}
};
int main()
{
	rectangle r1;
	rectangle r2(4);
	rectangle r3(3,4);
	cout<<"the area of rectangle 1 is: "<<r1.area()<<endl;
	cout<<"the area of rectangle 2 is: "<<r2.area()<<endl;
	cout<<"the area of rectangle 3 is: "<<r3.area()<<endl;
	return 0;
}

