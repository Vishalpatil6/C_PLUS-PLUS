// Program to use Parameterized Constructor
// and Constructor Overloading

#include <iostream.h>
#include <conio.h>
#define PI 3.14

class Circle
{
	float radius;
public:
	Circle();
	Circle(float);
	void getRadius();
	float area();
	void showRadius();
};

Circle :: Circle()
{
	radius = 10;
}

Circle :: Circle( float r )
{
	radius = r;
}

void Circle :: getRadius()
{
	cout << "Enter Radius ::: ";
	cin >> radius;
}

float Circle :: area()
{
	float ar;
	ar = PI * radius * radius;
	return ar;
}

void Circle :: showRadius()
{
	cout << "\n Radius : " << radius;
}

void main()
{
	clrscr();
	Circle c1(10);
	
	c1.showRadius();
	float a = c1.area();
	cout << "\n Area of Circle : " << a;
	
	getch();
}
