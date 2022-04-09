//Program to Input and Display String

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main()
{
	clrscr();
	char c[25];
	
	cout << " Enter Name : ";
	gets(c);

	cout << "\n Name = " << c;
	cout << "\n Name = ";
	puts(c);

	getch();
}
