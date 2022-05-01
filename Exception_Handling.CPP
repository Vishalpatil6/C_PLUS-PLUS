// Program to explain Exception Handling
// using try, catch and throw

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    int a, b;
    cout << "Enter value of a and b : ";
    cin >> a >> b;
    int c = a - b;

    try
    {
        if (c != 0)
        {
            cout << "\n Result : " << (a / c);
        }
        else
        {
            throw(c);
        }
    }
    catch (int i)
    {
        cerr << "\n Exception caught : " << i;
    }
    cout << "\n END.";

    getch();
}
