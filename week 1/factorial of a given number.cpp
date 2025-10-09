#include<iostream>
using namespace std;
int fact(int x)
{
	if(x==0)
		return 1;
	else if(x==1)
		return 1;
	else
		return x*fact(x-1);
}
int main()
{
	int n,r,i,a;
	cout<<"enter the n value: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the value: ";
		cin>>a;
		r=fact(a);
		cout<<"factorial of a given number is: ";
		cout<<r<<"\n";
	}
}
