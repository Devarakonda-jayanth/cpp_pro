#include<iostream>
using namespace std;
namespace one
{
	int a=5;
}
namespace two
{
	float a=6.7;
}
namespace three
{
	double a=4.675;
}
int main()
{
	cout<<"integer a="<<one::a<<endl;
	cout<<"float a="<<two::a<<endl;
	cout<<"double a="<<three::a<<endl;
}
