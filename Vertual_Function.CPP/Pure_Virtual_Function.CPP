// Program to explain Pure virtual function
// and Abstract class

#include <iostream.h>
#include <conio.h>

class Shape
{
  protected:
    float width, height;

  public:
    Shape(float a = 0.0, float b = 0.0)
    {
        width = a;
        height = b;
    }

    virtual void area() = 0;
};

class Rectangle : public Shape
{
  public:
    Rectangle(float a = 0.0, float b = 0.0) : Shape(a, b)
    {
    }

    void area()
    {
        cout << "Rectangle class area : " << (width * height) << endl;
    }
};

class Triangle : public Shape
{
  public:
    Triangle(float a = 0.0, float b = 0.0) : Shape(a, b)
    {
    }

    void area()
    {
        cout << "Triangle class area : " << ((width * height) / 2) << endl;
    }
};

void main()
{
    clrscr();

    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    // store the address of Rectangle
    shape = &rec;
    // call rectangle area.
    shape->area();

    // store the address of Triangle
    shape = &tri;
    // call triangle area.
    shape->area();

    getch();
}
