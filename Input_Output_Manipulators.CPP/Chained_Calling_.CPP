// Program for Chained Calling of
// cout.write() function

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
    clrscr();

    char nm[25];
    cout << "Enter Name : ";
    cin.getline(nm, 25);
    cout.write("Name : ", 7).write(nm, strlen(nm));
    cout << endl;

    getch();
}
