// Program to pass Structure Variable to Function.

#include <iostream.h>
#include <conio.h>

struct Distance
{
    int feet;
    float inches;
};

void display(Distance d)
{
    cout << "\n Distance = " << d.feet << "\'-" << d.inches << "\"";
}

void main()
{
    clrscr();
    Distance d1;
    Distance d2;

    cout << "\n Enter feet and inches ::: ";
    cin >> d1.feet >> d1.inches;

    // Structure Variable Assignment.
    d2 = d1;

    display(d1);
    display(d2);

    getch();
}
