#include<iostream>
using namespace std;
class area
{
	private:
		int x,y;
		public:
			area()
			{
				x=5;
				y=8;
			}
			void show()
			{
				cout<<"area of rectangle="<<x*y;
			}
};
int main()
{
	area s;
	s.show();
	return 0;
}


