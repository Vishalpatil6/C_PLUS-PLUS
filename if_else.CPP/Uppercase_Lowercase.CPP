// Program to check whether the given character is
// Uppercase, Lowercase, Digit or Special Symbol.

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    char ch;
    cout << " Enter any charcter ::: ";
    cin >> ch;

    if ((ch >= 'A') && (ch <= 'Z'))
        cout << "\n It is an Uppercase letter.";
    else if ((ch >= 'a') && (ch <= 'z'))
        cout << "\n It is a Lowercase letter.";
    else if ((ch >= '0') && (ch <= '9'))
        cout << "\n It is a Digit.";
    else
        cout << "\n It is a Special Symbol.";

    getch();
}
