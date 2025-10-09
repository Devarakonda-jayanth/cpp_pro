#include<iostream>
using namespace std;
class employe
{
	private:
		string ename;
		int idno;
		float sal;
	public:
	void get()
	{
		cout<<"employe name=";
		cin>>ename;
		cout<<"employe id number=";
		cin>>idno;
		cout<<"employe salary=";
		cin>>sal;
	}
	void show()
	{
		cout<<"\n\n"<<"employe details are:\n";
		cout<<"employe name="<<ename<<"\n";
		cout<<"employe id number="<<idno<<"\n";
		cout<<"employe salary="<<sal<<"\n\n";
	}
};
int main()
{
	employe e[10];
	int i,n;
	cout<<"enter no.of employe:";
	cin>>n;
	for(i=0;i<n;i++)
	{	
	    e[i].get();
	    e[i].show();
	}
	return 0;
}






