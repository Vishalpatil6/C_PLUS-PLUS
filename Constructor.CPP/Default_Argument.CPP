// Program to explain Constructor with Default Argument

#include <iostream.h>
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

    A a1;
    A a2(100);

    a1.showX();
    a2.showX();

    getch();
}
