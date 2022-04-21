// Program to Eliminate Function Declaration
// with Function Definition at Top

#include <iostream.h>
#include <conio.h>

// Eliminating declaration.
void show(int x)
{
    cout << "\n x = " << x;
}

void main()
{
    clrscr();

    int a = 10;

    show(a);

    getch();
}
