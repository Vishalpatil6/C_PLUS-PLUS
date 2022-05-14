// Program to use cout.put() function
// to output a character

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    char ch;
    cout << "Enter a character : ";
    cin.get(ch);
    cout.put(ch);
    cout << endl;

    getch();
}
