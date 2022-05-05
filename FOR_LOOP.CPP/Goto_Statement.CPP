// Program to explain goto statement.

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int i;
    i = 1;

Nils:
    cout << "  " << i;
    i++;
    if (i <= 10)
    {
        goto Nils;
    }

    getch();
}
