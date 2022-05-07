// Program to explain Nested Macro Substitution

#include <iostream.h>
#include <conio.h>

#define PI 3.14159
#define Volume(r) (4.0 / 3.0) * PI *(r) * (r) * (r)

void main()
{
    float r, v;
    clrscr();

    cout << " Enter Radius of Sphere : ";
    cin >> r;

    v = Volume(r);

    cout << "\n Volume of Sphere : " << v;

    getch();
}
