// Program to check whether the given character
// is Vowel or not.

#include <iostream.h>
#include <conio.h>

void  main()
{
	char ch;
	clrscr();
	cout << " Enter the character ::: ";
	cin >> ch;

	switch( ch )
	{
		case 'a' :
		case 'A' :
		case 'e' :
		case 'E' :
		case 'i' :
		case 'I' :
		case 'o' :
		case 'O' :
		case 'u' :
		case 'U' :  
			cout << " It is a Vowel.";
			break;
		default :  
			cout << " It is not a Vowel.";
	}

	getch();
}
