// Program to explain Dynamic Memory
// Allocation for String

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
	clrscr();

	char s1[25] = "C++ Programming Examples";
	int len = strlen(s1);
	
	char *ps;
	ps = new char[len +1];
	
	strcpy(ps, s1);
	cout << "\n ps = " << ps;
	delete ps;
	
	getch();
}

 
