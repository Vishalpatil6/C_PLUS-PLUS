// Program to use #pragma Preprocessor

#include <iostream.h>
#include <conio.h>

void fun1();
void fun2();

#pragma startup fun1
#pragma exit fun2

void main()
{
    cout << "\nInside main().";

    getch();
}

void fun1()
{
    cout << "\nInside function1()-Before main().";
}

void fun2()
{
    cout << "\nInside function2()-After  main().";
    getch();
}
