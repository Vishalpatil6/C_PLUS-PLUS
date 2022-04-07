//Parameterized constuctor

#include <iostream.h>
#include <conio.h>
class volume
{
    int length, breadth, height;

  public:
    volume(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
        cout << "Length of rectangle is: " << length << endl;
        cout << "Breadth of rectangle is: " << breadth << endl;
        cout << "Height od rectangle is: " << height << endl;
    }

    void display()
    {
        cout << "Volume of rectangle is: " << length * breadth * height;
    }
};

void main()
{
    clrscr();
    volume a(5, 10, 10);
    a.display();
    getch();
}
