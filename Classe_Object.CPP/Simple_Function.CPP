//Simple Member Function

#include <iostream.h>
#include <conio.h>
class member
{
  public:
    void inside()
    {
        cout << "This is Inside Member Function" << endl;
    }
    void outside();
};

void member::outside()
{
    cout << "This is Outside Member Function";
}

void main()
{
    clrscr();
    member m;
    m.inside();
    m.outside();
    getch();
}
