// Program to calculate Simple Interest using
// Function ( No Argument and No Return Value )

#include <iostream.h>
#include <conio.h>

void Simp_Int();

void main()
{
	clrscr();

	Simp_Int();
	
	getch();
}

void Simp_Int()
{
	float p, r, t, si; 
	cout << " Enter Principal, Rate and Time : ";
	cin >> p >> r >> t;
	
	si = ( p * r * t ) / 100;
	
	cout << "\n Simple Interest = " << si;
}
