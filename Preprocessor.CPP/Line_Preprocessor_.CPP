// Program to use #line Preprocessor

#include <iostream.h>
#include <conio.h>

void main()
{
    cout << "\nA";

#line 100
    cout << "\nB";
    cout << "\n FILE : " << __FILE__;
    cout << ", LINE : " << __LINE__;

#line 200
    cout << "\nD";
    cout << "\nE";
    cout << "\n FILE : " << __FILE__;
    cout << ", LINE : " << __LINE__;

    getch();
}
