// Program to use setprecisiion() Manipulator

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main()
{
    clrscr();

    cout << setw(8) << setprecision(2);
    cout << 12.34567 << endl;
    cout << setw(8) << setprecision(2);
    cout << 12.3 << endl;

    getch();
}
