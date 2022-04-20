//Program to explain Function Overriding

#include <iostream.h>
#include <conio.h>

class A
{
  private:
    int x;

  public:
    void get()
    {
        cout << "\nEnter x : ";
        cin >> x;
    }

    void show()
    {
        cout << " x : " << x;
    }
};

class B : public A
{
  private:
    int y;

  public:
    void get()
    {
        cout << "Enter y : ";
        cin >> y;
    }

    void show()
    {
        cout << "\n y : " << y;
    }
};

class C : public A
{
  private:
    int z;

  public:
    void get()
    {
        cout << "Enter z : ";
        cin >> z;
    }

    void show()
    {
        cout << "\n z : " << z;
    }
};

void main()
{
    clrscr();
    A a1;
    B b1;
    C c1;
    a1.get();
    b1.get();
    c1.get();
    a1.show();
    b1.show();
    c1.show();

    getch();
}
