#include<iostream>
using namespace std;
class Birth
{
	public:
		int dd,mm,yy;
		void show()
		{
			cout<<"Enter day,month,year:";
			cin>>dd>>mm>>yy;
	    	cout<<"Date of Birth=";
			cout<<dd<<"-"<<mm<<"-"<<yy;
		}
};
class student  
{
	public:
		char name[20];
		Birth dob;
		char gender;
	    void print()
	    {
	    	cout<<"Enter name and gender"<<endl;
	    	cin>>name>>gender;
	    	dob.show();
	    	cout<<"\nName="<<name<<endl;
	    	cout<<"Gender="<<gender<<endl;
		}
};
int main()
{
	student s;
	s.print();
}
