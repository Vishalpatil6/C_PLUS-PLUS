// Program to explain Nesting of Member Function

#include <iostream.h>
#include <conio.h>

class A
{
	int x;
	int y;
public:
	void get()
	{
		cout << " Enter x & y : ";
		cin >> x >> y;
	}
	
	void showX()
	{
		cout << "\n x : " << x;
	}
	
	void showY()
	{
		showX();
		cout << "\n y : " << y;
	}
};

void main()
{
	clrscr();
	
	A a1;
	a1.get();
	a1.showY();
	
	getch();
}
