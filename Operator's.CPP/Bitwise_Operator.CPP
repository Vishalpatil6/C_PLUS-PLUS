#include <iostream.h>
#include <conio.h>

void main()
{
    int a = 3, b = 6, c;
    clrscr();

    cout << "\n a = " << a;
    cout << "\n b = " << b;

    c = a & b;
    cout << "\n a & b = " << c;

    c = a | b;
    cout << "\n a | b = " << c;

    c = a ^ b;
    cout << "\n a ^ b = " << c;

    c = ~a;
    cout << "\n ~a = " << c;

    c = a << 3;
    cout << "\n a << 3 = " << c;

    c = b >> 2;
    cout << "\n b >> 2 = " << c;

    getch();
}
