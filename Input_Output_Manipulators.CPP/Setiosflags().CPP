// Program to use setiosflags() Manipulator

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main()
{
    clrscr();

    cout << setiosflags(ios::showpos);
    cout << setiosflags(ios::showpoint);
    cout << setiosflags(ios::fixed | ios::left);
    cout << setprecision(2);
    cout << setfill('*');

    cout << setw(8) << 12.34567 << endl;
    cout << setw(8) << -12.30 << endl;
    cout << setw(8) << 12.00 << endl;

    getch();
}
