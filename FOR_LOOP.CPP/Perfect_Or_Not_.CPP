
// Program to check whether the given number
// is Perfect Number or not.

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int i, n, sum;

    cout << " Enter a number : ";
    cin >> n;

    sum = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        cout << "It is a PERFECT Number.";
    }
    else
    {
        cout << "It is NOT a PERFECT Number.";
    }

    getch();
}
