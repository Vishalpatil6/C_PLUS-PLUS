//PROGRAM TO ACCESS METHOD BY EXPLICITY AND IMPLICITY CALL.

#include <stdio.h>
#include <conio.h>
#include <iostream.h>

class ObjectMethod
{
    int a, b;

  public:
    ObjectMethod(int, int);
    void display(void)
    {
        cout << "A : " << a << "\n";
        cout << "B : " << b << "\n";
    }
};

ObjectMethod ::ObjectMethod(int x, int y)
{
    a = x;
    b = y;
}

void main()
{
    clrscr();
    ObjectMethod obj1 = ObjectMethod(23, 95);
    ObjectMethod obj2(41, 77);
    cout << "\nCall By Implicity:: \n";
    obj1.display();
    cout << "\nCall By Explicity:: \n";
    obj2.display();
    getch();
}
