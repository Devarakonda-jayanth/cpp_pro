#include <iostream>
using namespace std;
class Rectangle 
{
	private:
		int length, breadth;
	public:
		Rectangle(int l, int b) 
		{
			length = l;
			breadth = b;
			cout << "Constructor called. Rectangle created with \n"<< 
			"Length = " << length << ", Breadth = " << breadth << endl;
		}
		void area() 
		{
			cout << "The area of rectangle is: " << length * breadth << endl;
		}
		~Rectangle() 
		{
			cout << "Destructor called. Rectangle destroyed." << endl;
		}
};
int main() 
{
	Rectangle r(4,7);
	r.area();
	return 0;
}
