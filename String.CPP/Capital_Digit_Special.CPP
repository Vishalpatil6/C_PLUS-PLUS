// Program to count number of Capital letters, Small letters,
// Digits and Special Symbols

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

void main()
{
    clrscr();
    int i, j, n, c = 0, s = 0, d = 0, ss = 0;
    char ch[100];

    cout << "\n Enter a String ::: ";
    gets(ch);

    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 65 && ch[i] <= 90)
            c++;
        else if (ch[i] >= 97 && ch[i] <= 122)
            s++;
        else if (ch[i] >= 48 && ch[i] <= 57)
            d++;
        else
            ss++;
    }

    cout << "\n Total no. of Capital Letters ::: " << c;
    cout << "\n Total no. of Small Letters ::: " << s;
    cout << "\n Total no. of Digits ::: " << d;
    cout << "\n Total no. of Special Symbols ::: " << ss;

    getch();
}
