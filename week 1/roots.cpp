#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	double r1,r2;
	cout<<"enter the values of the a b c: ";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	r1=(-b+sqrt(d))/2*a;
	r2=(-b-sqrt(d))/2*a;
	if(d==0)
	{	
		cout<<"the roots are Equal..."<<endl;
		cout<<"r1="<<r1<<" r2="<<r2;
	}
	else if(d>0)
	{
		cout<<"roots are real and distinct"<<endl;
		cout<<"r1="<<r1<<" r2="<<r2;
	}
	else if(d<0)
	{
		cout<<"roots are imaginary";
	}
	return 0;
}



