// Program to use cin.getline() function
// to input a String

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    char nm[25];
    cout << "Enter Name : ";
    cin.getline(nm, 25);
    cout << "Name : " << nm;

    getch();
}
