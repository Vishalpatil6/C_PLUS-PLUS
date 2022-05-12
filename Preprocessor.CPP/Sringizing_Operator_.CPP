// Program to use Stringizing ( # ) Operator

#include <iostream.h>
#include <conio.h>

#define MKSTR(x) #x

void main()
{
    clrscr();
    cout << MKSTR(C++ Programming Examples) << endl;
    getch();
}
