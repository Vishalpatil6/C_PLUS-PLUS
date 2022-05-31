// Destructor Demo

#include <iostream.h>
#include <conio.h>

int count = 0;

class dest
{
  public:
    dest()
    {
        count++;
        cout << "\n   Constuctor:" << count;
    }
    ~dest()
    {
        cout << "\n   Destuctor:" << count;
        count--;
    }
};

void main()
{
    clrscr();
    cout << "\nMain Scope:";
    dest d1, d2, d3, d4;
    {
        cout << "\nInner Block1";
        dest d5, d6;
    }

    {
        cout << "\nInner Block2";
        dest d7;
    }
    cout << "\nMain Scope:";
    getch();
}
