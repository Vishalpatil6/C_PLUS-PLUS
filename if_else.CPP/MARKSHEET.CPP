/*
  Program to find Grade using Nested If statement
  on the basis of Range of Marks.

    Marks	Grade
    80 to 100	A+
    70 to 80	A
    60 to 70	B
    40 to 60	C
    0 to 40	F

 */

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int m;

    cout << "Enter the marks : ";
    cin >> m;

    if (m >= 80)
    {
        cout << "\n Grade = A+ ";
    }
    else
    {
        if (m >= 70)
        {
            cout << "\n Grade = A";
        }
        else
        {
            if (m >= 60)
            {
                cout << "\n Grade = B ";
            }
            else
            {
                if (m >= 40)
                {
                    cout << "\n Grade = C";
                }
                else
                {
                    cout << "\n Grade = F";
                }
            }
        }
    }

    getch();
}
