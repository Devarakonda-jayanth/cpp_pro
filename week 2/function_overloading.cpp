#include<iostream>
using namespace std;
inline int square(int n)
{
	return n*n;
}
class sample
{
	public:
		void show()
		{
			cout<<"Function with no parameters:"<<"\n";
		}
		void show(int i)
		{
			cout<<"integer value="<<i<<"\n";
		}
		void show(float f)
		{
			cout<<"float value="<<f<<"\n";
		}
		void show(double d)
		{
			cout<<"double value="<<d<<"\n";
		}
		void show(char ch)
		{
			cout<<"char value="<<ch<<"\n";
		}
		void show(string s)
		{
			cout<<"string value="<<s<<"\n";
		}
};
int main()
{
	int x=20;
	sample s;
	cout<<"inline="<<square(x)<<"\n";
	s.show();
	s.show(22);
	s.show(4.56);
	s.show(55+75);
	s.show('hi');
	s.show("c++");
	s.show("hi");
	return 0;
}



