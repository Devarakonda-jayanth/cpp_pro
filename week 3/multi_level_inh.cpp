#include<iostream>
using namespace std;
class student
{
	protected:
		char name[20];
		int age;
		char gender;
	public:
		void getst()
		{
			cout<<"Enter name , age and gender of student:"<<endl;
			cin>>name>>age>>gender;
		}
		void show()
		{
			cout<<"Student name="<<name<<"\n";
			cout<<"Student age="<<age<<"\n";
			cout<<"Student gender="<<gender<<"\n";
		}
};
class marks: public student
{
	protected:
		float m1,m2,m3,m4;
		char course[20];
		int rollno;
	public:
		void get_marks()
		{
			getst();
			cout<<"Enter cpp,maths,che,phy marks:"<<endl;
			cin >> m1 >> m2 >> m3 >> m4;
			cout<<"Enter rollno and course:"<<endl;
			cin>>rollno>>course;
		}
};
class result: public marks
{
	public:
	void print()
	{
		show();
		cout<<"percentage:"<<(m1+m2+m3+m4)/4;
	}
};
int main()
{
	result r;
	r.get_marks();
	r.print();
	return 0;
}






