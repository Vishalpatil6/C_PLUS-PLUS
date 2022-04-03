#include <iostream.h>
#include <conio.h>
#include <math.h>

void main()
{
   	clrscr();
   	float  s, a, b, c, ar;

   	cout << " Enter the value a, b & c : ";
   	cin >> a >> b >> c;

   	s = (a+b+c) / 2;
   	ar = sqrt( s * (s-a) * (s-b) * (s-c) );

   	cout << " Area of Triangle is = " << ar;

   	getch();
}
