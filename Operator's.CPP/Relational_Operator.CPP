#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int n;

	cout << "\n Enter any Number : ";
	cin >> n;

	cout << "\n (n < 10) is = " << (n < 10);
	cout << "\n (n > 10) is = " << (n > 10);
	cout << "\n (n <= 10) is = " << (n <= 10);
	cout << "\n (n >= 10) is = " << (n >= 10);
	cout << "\n (n == 10) is = " << (n == 10);
	cout << "\n (n != 10) is = " << (n != 10);

	getch();
}
