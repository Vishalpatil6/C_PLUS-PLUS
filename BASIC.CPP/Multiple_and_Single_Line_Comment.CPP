/*  
This program is used to explain Multiple line 
comment and Single line comment.
*/
#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    float r, h; // Variable Declaration.

    cout << " Enter Radius & Height of Cylinder ::: ";
    cin >> r >> h; // Reading data from KB.

    float v = 3.14 * r * r * h; // Calculation of volume.

    cout << "\n Volume of Cylinder  = " << v << '\n';

    getch();
}
