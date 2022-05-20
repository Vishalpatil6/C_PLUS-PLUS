// Program to explain Function Template

#include <iostream.h>
#include <conio.h>

template <class T>
void swap(T a, T b)
{
    T t;
    t = a;
    a = b;
    b = t;
    cout << "\n a = " << a << ", b = " << b;
}

void main()
{
    clrscr();

    swap(10, 20);
    swap(10.25, 20.75);
    swap('A', 'B');

    getch();
}
