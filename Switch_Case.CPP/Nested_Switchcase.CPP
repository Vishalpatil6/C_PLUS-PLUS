// Program to explain Nested Switch-Case Statement.

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	
	int a = 100; 
	int b = 200; 
	switch( a ) 
	{ 
		case 100: 
			cout << "In Outer Switch." << endl; 
			switch( b ) 
			{ 
				case 200: 
					cout << "In Inner Switch." << endl; 
			} 
	} 
	cout << "Value of a is : " << a << endl; 
	cout << "Value of b is : " << b << endl;
	
	getch();
}
