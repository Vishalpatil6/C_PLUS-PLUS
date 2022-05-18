// Program to use cout.precision() function

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    cout.precision(2);
    cout.width(8);
    cout << 12.34567 << endl;
    cout.width(8);
    cout << 12.1 << endl;

    getch();
}
