// Program to explain cout, cerr and
// clog stream functions

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    cout << "\n C++ Programming Examples.";
    cerr << "\n Unbuffered Error Message.";
    clog << "\n Buffered Error Message.";

    getch();
}
