#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int n1, n2, t;

    cout << "\n Enter Two Numbers ::: ";
    cin >> n1 >> n2;

    cout << "\n n1 = " << n1 << ", n2 = " << n2;

    t = n1;
    n1 = n2;
    n2 = t;

    cout << "\n n1 = " << n1 << ", n2 = " << n2;

    getch();
}
