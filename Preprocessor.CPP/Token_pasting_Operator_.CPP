// Program to use Token Pasting ( ## ) Operator

#include <iostream.h>
#include <conio.h>

#define concat(a, b) a##b

void main()
{
    clrscr();

    int xy = 100;
    cout << "\n Value : " << concat(x, y);

    getch();
}
