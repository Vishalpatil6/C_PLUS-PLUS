// Program to use #error Preprocessor

//#define USA 1
//#define IND 1

#include <iostream.h>
#include <conio.h>

#if (!defined(USA) || !defined(IND))
#error ERROR: NO_CURRENCY rate is specified.
#endif

void main()
{
    clrscr();
    int amt;
    amt = 1000;
    cout << "\n Amount : " << amt;
    getch();
}
