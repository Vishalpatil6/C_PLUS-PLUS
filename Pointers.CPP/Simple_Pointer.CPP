// Program to explain working of
// Simple Pointer Variable

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a = 10;
    int *p;

    p = &a;

    cout << "\n a = " << a;
    cout << "\n &a = " << &a;
    cout << "\n p = " << p;
    cout << "\n *p = " << *p;
    cout << "\n &p = " << &p;

    getch();
}
