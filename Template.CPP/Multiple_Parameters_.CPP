// Program to use Function Templates with
// Multiple Parameters

#include <iostream.h>
#include <conio.h>

template <class T1, class T2>
void show(T1 a, T2 b)
{
    cout << "\n a = " << a << " b = " << b;
}

void main()
{
    clrscr();

    show(10, 'B');
    show('B', 20.75);
    show(10.25, 'B');

    getch();
}
