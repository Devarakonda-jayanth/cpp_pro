#include<iostream>
using namespace std;
class binary
{
	private:
		int real,img;
	public:
		void get()
		{
			cout<<"Enter real value and img value:"<<"\n";
			cin>>real>>img;
		}
		friend void operator+(binary &b1,binary &b2);
};
void operator+(binary &b1,binary &b2)
{
	cout<<b1.real+b2.real<<"+"<<b1.img+b2.img<<"i";
}
int main()
{
	binary b1,b2;
	b1.get();
	b2.get();
	operator+(b1,b2);
	return 0;
}




