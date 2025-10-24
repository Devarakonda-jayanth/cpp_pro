#include <iostream>
#include <string>
using namespace std;
class person 
{
	protected:
    	int age;
	    string name;
    	char gender;
	void getp() 
	{
        cout << "Enter name,age and gender:\n";
        cin >> name>>age>>gender;
    }
    void showp() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
class student : public person 
{
    public:
    	float per;
    	int pno;
    	void getst() 
		{
        	getp();
    	    cout << "Enter roll no number and percentage: \n";
        	cin >> pno>>per;
    	}
	    void shows() 
		{
    	    cout << "\nStudent Details:"<< endl;
        	showp();
	        cout << "Pin no: "<< pno << endl;
    	    cout << "Percentage: "<< per <<"\n\n";
    	}
};
class faculty : public person 
{
	public:
    	int empid;
	    char sub[20];
    	int exp;
	    void getf() 
		{
        	getp();
	        cout << "Enter employee ID: ";
    	    cin >> empid;
        	cout << "Enter subject: ";
	        cin >> sub;
    	    cout << "Enter experience: ";
        	cin >> exp;
    	}
	    void showf(){
    	    cout << "\nFaculty Details:" << endl;
        	showp();
	        cout << "Employee ID: " << empid << endl;
    	    cout << "Subject: " << sub << endl;
        	cout << "Experience: " << exp << " years" << endl;
    	}
};
int main() 
{
    student s;
    faculty f;
    s.getst();
    s.shows();
    f.getf();
    f.showf();
    return 0;
} 



