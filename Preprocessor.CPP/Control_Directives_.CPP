// Program to use Compiler Control Directives ( #undef )

#include <iostream.h>
#include <conio.h>

#define VAL 40

#ifdef VAL
#undef VAL
#endif

#define VAL 50

void main()
{
    clrscr();

    cout << "\n Value = " << VAL;

    getch();
}
