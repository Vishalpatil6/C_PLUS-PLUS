// Program to explain Simple Do-While Loop.

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int n = 1;

	do
	{
		cout << "\n Enter No.( 0 for exit) ::: ";
		cin >> n;
	}while( n != 0 );

	getch();
}
