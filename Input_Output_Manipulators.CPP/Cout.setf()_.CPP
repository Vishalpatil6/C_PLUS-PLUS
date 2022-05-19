// Program to use cout.setf() function

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main()
{
    clrscr();

    cout.setf(ios::left, ios::adjustfield);
    cout.fill('*');
    cout.precision(2);
    cout.width(8);
    cout << 12.34567 << endl;
    cout.width(8);
    cout << 12.3 << endl;
    cout.width(8);
    cout << 12 << endl;

    getch();
}
