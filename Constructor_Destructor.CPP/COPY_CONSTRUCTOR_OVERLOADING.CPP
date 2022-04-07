// Program to use Copy Constructor
// and Constructor Overloading

#include <iostream.h>
#include <conio.h>
#define PI 3.14

class Circle
{
    float radius;

  public:
    Circle();
    Circle(float);
    Circle(Circle &);
    void getRadius();
    float area();
    void showRadius();
};

Circle ::Circle()
{
    radius = 10;
}

Circle ::Circle(float r)
{
    radius = r;
}

Circle ::Circle(Circle &c)
{
    radius = c.radius;
}

void Circle ::getRadius()
{
    cout << "Enter Radius ::: ";
    cin >> radius;
}

float Circle ::area()
{
    float ar;
    ar = PI * radius * radius;
    return ar;
}

void Circle ::showRadius()
{
    cout << "\n Radius : " << radius;
}

void main()
{
    clrscr();
    Circle c1(10);
    Circle c2(c1);

    c2.showRadius();
    float a = c2.area();
    cout << "\n Area of Circle : " << a;

    getch();
}
