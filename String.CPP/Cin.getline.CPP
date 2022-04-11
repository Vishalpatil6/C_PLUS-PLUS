// Program to Input Multiple words String using cin.getline() function.

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	char name[25];
	
	cout << "\n Enter your name ::: ";
	cin.getline( name, 25);
	
	cout << "\nYou enter your name as : \n" << name;
	getch();
}
