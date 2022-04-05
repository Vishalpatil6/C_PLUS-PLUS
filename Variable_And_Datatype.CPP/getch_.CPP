// Program to explain difference between
// getch() and getche() function.

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	char ch;
	
	cout << "\n Enter a Character : ";
	ch = getch();
	cout << "\n ch = " << ch;
	
	cout << "\n Enter a Character : ";
	ch = getche();
	cout << "\n ch = " << ch;
		
	getch();
}
