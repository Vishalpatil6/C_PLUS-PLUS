// Program to use exit() function to check whether
// the given Number is Prime Number or Not.

#include <iostream.h>
#include <conio.h>
#include <process.h>

void main()
{
	clrscr();
	int n, i;

	cout << " Enter the Number ::: ";
	cin >> n ;

	for( i=2 ; i<n/2 ; i++ )
	{
		if( n % i == 0 )
		{
			cout << "\n" << n << " is not a Prime Number.";
			getch();
			exit(0);
		}
	}
	cout << "\n" << n << " is a Prime Number.";

	getch();
}
