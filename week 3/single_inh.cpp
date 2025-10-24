#include<iostream>
using namespace std;
class person
{
	protected:
		char name[20];
		int age;
		char gender[6];
	public:
		void get()
		{
			cout<<"Enter name, age, gender:";
			cin>>name>>age>>gender;
		}
};
class student:public person
{
	public:
		char course[20];
		int rno;
		void getinfo()
		{
			get();
			cout<<"Enter course and rno:";
			cin>>course>>rno;
		}
		void print()
		{
			cout<<"student name:"<<name<<"\n";
			cout<<"student age:"<<age<<"\n";
			cout<<"student gender:"<<gender<<"\n";
			cout<<"student course:"<<course<<"\n";
			cout<<"student roll no:"<<rno<<"\n";
		}
};
int main()
{
	student s;
	s.getinfo();
	s.print();
	return 0;
}


