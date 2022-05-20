// Program to use Simple Function
// Template / Generic Function

#include <iostream.h>
#include <conio.h>

template <class T>
void show(T a)
{
    cout << "\n a = " << a;
}

void main()
{
    clrscr();

    show('N');
    show(10);
    show(12.34);
    show("Nils");

    getch();
}
