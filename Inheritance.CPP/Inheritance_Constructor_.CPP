// Program to explain Inheritance with Default and
// Parameterized Constructors in both Base class and
// Derived Class

#include <iostream.h>
#include <conio.h>
#define PI 3.14

class Circle
{
  protected:
    float radius;

  public:
    Circle()
    {
        radius = 0.0;
        cout << "\n Default Constructor[Circle]";
    }

    Circle(float r)
    {
        radius = r;
        cout << "\n Parameterised Constructor[Circle]";
    }

    void readRadius()
    {
        cout << " Enter Radius ::: ";
        cin >> radius;
    }

    void showRadius()
    {
        cout << "\n Radius : " << radius;
    }

    float area()
    {
        float ar;
        ar = PI * radius * radius;
        return ar;
    }
};

class Cylinder : public Circle
{
  private:
    float height;

  public:
    Cylinder() : Circle()
    {
        height = 0.0;
        cout << "\n Default Constructor[Cylinder]";
    }

    Cylinder(float r, float h) : Circle(r)
    {
        height = h;
        cout << "\n Parameterised Constructor[Cylinder]";
    }

    void readHeight()
    {
        cout << " Enter Height ::: ";
        cin >> height;
    }

    void showHeight()
    {
        cout << "\n Height : " << height;
    }

    float volume()
    {
        float v;
        v = PI * radius * radius * height;
        return v;
    }
};

void main()
{
    clrscr();

    Cylinder cl1(10.0, 10.0);
    cl1.showRadius();
    cl1.showHeight();
    cout << "\n Enter Details of Cylinder : \n";
    cl1.readRadius();
    cl1.readHeight();
    cout << "\n Cylinder : ";
    cl1.showRadius();
    cl1.showHeight();
    float v = cl1.volume();
    cout << "\n Volume of Cylinder : " << v;

    getch();
}


