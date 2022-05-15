// Program to use cout.write() function

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
    clrscr();

    char nm[25];
    cout << "Enter Name : ";
    cin.getline(nm, 25);
    cout.write("Name : ", 7);
    cout.write(nm, strlen(nm));
    cout << endl;

    getch();
}
