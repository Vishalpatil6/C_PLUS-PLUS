// Program to use Class Template with
// Multiple Parameters

#include <iostream.h>
#include <conio.h>

template <class T1, class T2>
class A
{
  private:
    T1 x;
    T2 y;

  public:
    A()
    {
    }

    A(T1 a, T2 b)
    {
        x = a;
        y = b;
    }

    void show()
    {
        cout << "\n x = " << x << " y = " << y;
    }
};

void main()
{
    clrscr();

    A<char, int> a1('B', 10);
    a1.show();

    A<int, float> a2(10, 12.34);
    a2.show();

    A<float, char> a3(12.34f, 'A');
    a3.show();

    A<double, int> a4(10.5, 20);
    a4.show();

    getch();
}
