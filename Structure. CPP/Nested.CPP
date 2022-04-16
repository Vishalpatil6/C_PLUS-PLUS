// Program to explain Nested Structure

#include <iostream.h>
#include <conio.h>

struct Distance
{
    int feet;
    float inches;
};

struct Room
{
    Distance length;
    Distance width;
};

void main()
{
    clrscr();

    Room drawing = {{12, 5.5}, {15, 6.0}};

    float l = drawing.length.feet + drawing.length.inches / 12.0;
    float w = drawing.width.feet + drawing.width.inches / 12.0;

    cout << "\n Area of Drawing Room is = " << l * w
         << " square feet.";

    getch();
}
