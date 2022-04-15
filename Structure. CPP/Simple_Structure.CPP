// Program to explain Simple Structure.

#include <iostream.h>
#include <conio.h>

struct Distance
{
    int feet;
    float inches;
};

void main()
{
    clrscr();
    Distance d1, d2;

    d1.feet = 12;
    d1.inches = 9.5;

    // Reading Distance from Keyboard.
    cout << "\n Enter feet ::: ";
    cin >> d2.feet;
    cout << "\n Enter inches ::: ";
    cin >> d2.inches;

    cout << "\n " << d1.feet << "\'-" << d1.inches << "\"";
    cout << "\n " << d2.feet << "\'-" << d2.inches << "\"";
    getch();
}
