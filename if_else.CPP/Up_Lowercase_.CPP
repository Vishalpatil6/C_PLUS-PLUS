// Program to check whether the Given character
// is in Uppercase, Lowercase, Digit or Special Symbol.

#include <iostream.h>
#include <conio.h>

void main()
{
    char c;
    clrscr();

    cout << " Enter a character ::: ";
    cin >> c;

    if (c >= 65 && c <= 90)
    {
        cout << "\n Character " << c << " is in Upper Case.";
    }
    else if (c >= 97 && c <= 122)
    {
        cout << "\n Character " << c << " is in Lower Case.";
    }
    else if (c >= 48 && c <= 57)
    {
        cout << "\n Character " << c << " is a Digit.";
    }
    else
    {
        cout << "\n Character " << c << " is a Special Symbol.";
    }

    getch();
}
