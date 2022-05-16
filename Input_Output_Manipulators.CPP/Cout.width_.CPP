// Program to use cout.width()

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    cout.width(8);
    cout << 22 << endl;
    cout.width(8);
    cout << 4444 << endl;
    cout.width(8);
    cout << 666666 << endl;

    getch();
}
