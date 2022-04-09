// Program to find Length of String
// without using strlen() function

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main()
{
	clrscr();
	char str[50];
	int  i, len;

	cout << " Enter String ::: ";
	gets( str );

	for( i=0 ; str[ i ] != '\0' ; i++ );
	len = i;

	cout << "\n Length of String ::: " << len;
	getch();
}
