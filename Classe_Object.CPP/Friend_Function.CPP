//Friendly Function

#include <iostream.h>
#include <conio.h>

class height;

class width
{
    int w;

  public:
    void getdata(int wt)
    {
        w = wt;
        cout << "Width:" << w << endl;
    }
    friend void area(width, height);
};

class height
{
    int h;

  public:
    void getdata(int ht)
    {
        h = ht;
        cout << "height:" << h << endl;
    }
    friend void area(width, height);
};

void area(width n, height m)
{
    int a;
    a = n.w * m.h;
    cout << "Area is :" << a;
}

void main()
{
    clrscr();
    width n;
    height m;
    n.getdata(10);
    m.getdata(20);
    area(n, m);
    getch();
}
