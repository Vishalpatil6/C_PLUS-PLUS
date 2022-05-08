// Program to use #include Preprocessor

Coding[myheader.h] :
    //  Save this file as "myheader.h" in current directory.
    int
    add(int x, int y)
{
    int s;
    s = x + y;
    return s;
}

int sub(int x, int y)
{
    int d;
    d = x - y;
    return d;
}

Coding :
//  Save this file with .cpp file extension.
#include <iostream.h>
#include <conio.h>

#include "myheader.h"

    void
    main()
{
    int a = 20, b = 10, res;
    clrscr();

    res = add(a, b);
    cout << "\n Sum = " << res;

    res = sub(a, b);
    cout << "\n Difference = " << res;

    getch();
}
