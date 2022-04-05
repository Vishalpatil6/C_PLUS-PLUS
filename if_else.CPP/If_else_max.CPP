// Program to find Maximum of Two Numbers
// using If-Else  statement.

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int  a, b, max;

	cout << " Enter Two Numbers ::: ";
	cin >> a >> b;

	if( a > b )
	{
		max = a;
	}
	else
	{
		max = b;
	}

	cout << "\n Maximum = " << max;

	getch();
}
