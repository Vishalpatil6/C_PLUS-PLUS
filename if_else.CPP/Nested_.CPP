// Program to find Maximum of Three Numbers
// using Nested If statement.

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int a, b, c, g;

	cout << "Enter three Number : ";
	cin >> a >> b >> c;

	if( a > b )
	{
		if( a > c )
		 	g = a;
		else
			g = c ;
	}
	else
	{
		if( b > c)
			g = b;
		else
			g = c;
	}
	
	cout << "Greatest Number is : " << g;
	
	getch();
}
