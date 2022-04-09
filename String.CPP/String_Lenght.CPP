// Program to find Length of String
// using strlen() function

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
	clrscr();
	char  str[51];
	int  length;

	cout << " Enter a String (max 50 characters) : ";
	cin.getline(str, 50);
	
	length = strlen(str);
	
	cout << "\n Length of the String is = " << length << endl;

	getch();
}
