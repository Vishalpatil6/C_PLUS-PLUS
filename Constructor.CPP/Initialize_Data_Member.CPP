// Program to expain different Technique to
// Initialize Data Members in constructor

#include <iostream.h>
#include <conio.h>

class Distance
{
  private:
    int feet;
    float inches;

  public:
    Distance() : feet(0), inches(0.0)
    {
    }

    Distance(int ft, float in) : feet(ft), inches(in)
    {
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
};

void main()
{
    clrscr();
    Distance d1, d2;
    d2.getDist();
    Distance d3(10, 6.0);
    cout << "\n Dist-1 : ";
    d1.showDist();
    cout << "\n Dist-2 : ";
    d2.showDist();
    cout << "\n Dist-3 : ";
    d3.showDist();

    getch();
}
