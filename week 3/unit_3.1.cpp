#include<iostream>
using namespace std;
class example
{
	private:
		int a;
	public:
		void get()
		{
			cout<<"Enter a value:"<<"\n";
			cin>>a;
		}
		void operator-()
		{
			example x;
			x.a= -a;
			return a;
		}
		void show()
		{
			cout<<"after increment a value is:"<<a;
		}
};
int main()
{
	example b1,b2;
	b1.get();
	b2=-b1;
	b2.show();
}




