// Program to explain Overloading of
// Template Functions

#include <iostream.h>
#include <conio.h>

template <class T>
void show(T a)
{
    cout << "\nTemplate Function ::: a = " << a;
}

void show(int a)
{
    cout << "\nSimple Function ::: a = " << a;
}

void main()
{
    clrscr();

    show(23);
    show('N');
    show(12.34);
    show("Nils");

    getch();
}
