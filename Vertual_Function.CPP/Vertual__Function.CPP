//Program to Virtual Function

#include <iostream.h>
#include <conio.h>
class B
{
  public:
    virtual void display() /* Virtual function */
    {
        cout << "Content of base class.\n";
    }
};
class D1 : public B
{
  public:
    void display()
    {
        cout << "Content of first derived class.\n";
    }
};
class D2 : public B
{
  public:
    void display()
    {
        cout << "Content of second derived class.\n";
    }
};

int main()
{
    clrscr();
    B *b;
    D1 d1;
    D2 d2;
    b = &d1;
    b->display(); /* calls display() of class derived D1 */
    b = &d2;
    b->display(); /* calls display() of class derived D2 */
    getch();
    return 0;
}
