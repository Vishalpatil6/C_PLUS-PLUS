// Program to explain break statement.

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int i;

	for( i=1 ; i<=10 ; i++ )
	{
		if(i == 5)
		{
			break;
		}
		cout << i << "   ";
	}

	getch();
}
