//constructor demo

#include <iostream.h>
#include <conio.h>
class demo
{
  public:
    demo()
    {
        cout << "This is constructor..!" << endl;
        cout << "This is called without Object..!";
    }
};

void main()
{
    clrscr();
    demo d;
    getch();
}
