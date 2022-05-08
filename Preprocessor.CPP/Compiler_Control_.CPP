// Program to use Compiler Control
// Directives ( #if and #endif )

#include <iostream.h>
#include <conio.h>

#define INDIA 1

// #define  USA  1

#if (defined INDIA)
#define PI 3.14159
#endif

#if (defined USA)
#define PI 3.14
#endif

void main()
{
    float r, a;
    clrscr();

    cout << " Enter Radius : ";
    cin >> r;

    a = PI * r * r;

    cout << "\n Area of Circle : " << a;

    getch();
}
