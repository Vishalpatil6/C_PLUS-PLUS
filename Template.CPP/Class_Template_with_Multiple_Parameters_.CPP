// Program to use Class Template with Multiple Parameters

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
        cout << "\n\n x = " << x << " y = " << y;
    }

    T1 getX()
    {
        return x;
    }

    T2 getY()
    {
        return y;
    }
};

void main()
{
    clrscr();

    A<char, int> a1('B', 10);
    a1.show();
    cout << "\n x : " << a1.getX();
    cout << "\n y : " << a1.getY();

    A<int, float> a2(10, 12.34);
    a2.show();
    cout << "\n x : " << a2.getX();
    cout << "\n y : " << a2.getY();

    A<float, char> a3(12.34f, 'A');
    a3.show();
    cout << "\n x : " << a3.getX();
    cout << "\n y : " << a3.getY();

    A<double, int> a4(10.5, 20);
    a4.show();
    cout << "\n x : " << a4.getX();
    cout << "\n y : " << a4.getY();

    getch();
}
