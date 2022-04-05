// Program to explain  If-else statement.

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int n;

    cout << "Enter Number : ";
    cin >> n;

    if (n > 100)
    {
        cout << "Number is greater than 100.";
    }
    else
    {
        cout << "Number is smaller than 100.";
    }

    getch();
}
