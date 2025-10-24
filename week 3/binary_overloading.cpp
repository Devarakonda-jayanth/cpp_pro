#include<iostream>
using namespace std;
class binary
{
	private:
		int real,img;
	public:
		void get()
		{
			cout<<"Enter real and img values:\n";
			cin>>real>>img;
		}
		void operator+(binary &b)
		{
			cout<<real+b.real<<"+"<<img+b.img<<"i";
		}
};
int main()
{
	binary b1,b2;
	b1.get();
	b2.get();
	b1+b2;
	return 0;
}
