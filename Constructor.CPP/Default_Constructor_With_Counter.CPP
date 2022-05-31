// Program to use Default Constructor
// with Counter example

#include <iostream.h>
#include <conio.h>

class Counter
{
    unsigned int count;

  public:
    Counter()
    {
        count = 0;
    }

    void inc_count()
    {
        count++;
    }

    int getCount()
    {
        return count;
    }
};

void main()
{
    clrscr();
    Counter c1, c2;
    cout << "\n c1 : " << c1.getCount();
    cout << "\n c2 : " << c2.getCount();

    c1.inc_count();
    c2.inc_count();
    c2.inc_count();

    cout << "\n c1 : " << c1.getCount();
    cout << "\n c2 : " << c2.getCount();
    getch();
}
