// Program to Pass Structure Variable to Function

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

void add_dist(Distance dd1, Distance dd2)
{
    Distance dd3;
    dd3.feet = dd1.feet + dd2.feet;
    dd3.inches = dd1.inches + dd1.inches;
    if (dd3.inches >= 12.0)
    {
        dd3.inches -= 12.0;
        dd3.feet++;
    }
    display(dd3);
}

void main()
{
    clrscr();
    Distance d1;
    Distance d2;

    cout << "\n Enter feet and inches ::: ";
    cin >> d1.feet >> d1.inches;

    cout << "\n Enter feet and inches ::: ";
    cin >> d2.feet >> d2.inches;

    display(d1);
    display(d2);

    add_dist(d1, d2);

    getch();
}
