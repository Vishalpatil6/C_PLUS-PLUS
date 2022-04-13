// Program to explain Nameless Object

include<iostream.h>
#include <conio.h>

    class A
{
    int x;

  public:
    A(int a = 10)
    {
        x = a;
    }

    void showX()
    {
        cout << "\n x : " << x;
    }
};

void main()
{
    clrscr();

    A().showX();
    A(100).showX();

    getch();
}
