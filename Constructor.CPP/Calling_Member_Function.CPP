// Program to explain calling of  Member function
// without functional notation of C-language

#include <iostream.h>
#include <conio.h>

class Distance
{
  private:
    int feet;
    float inches;

  public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }

    Distance(int ft, float in)
    {
        feet = ft;
        inches = in;
    }

    Distance(float f)
    {
        feet = int(f);
        inches = 12 * (f - feet);
    }

    void getDist()
    {
        cout << "Enter Feet & Inches : ";
        cin >> feet >> inches;
    }

    void showDist()
    {
        cout << feet << "\'-" << inches << "\"";
    }

    Distance square();
};

Distance Distance ::square()
{
    Distance dd;
    float ft = feet + inches / 12.0;
    ft = ft * ft;
    dd.feet = int(ft);
    dd.inches = 12 * (ft - dd.feet);
    return dd;
}

void main()
{
    clrscr();
    Distance d1(12, 9.0);
    Distance d2;

    cout << "\n d1 : ";
    d1.showDist();

    d2 = d1.square();

    cout << "\n d2 : ";
    d2.showDist();

    getch();
}
