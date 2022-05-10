// Program to use __LINE__, __FILE__, __DATE__ and __TIME__

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

    getch();
}
