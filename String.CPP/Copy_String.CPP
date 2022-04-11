// Program to Copy a String
// using strcpy() function

#include <iostream.h>
#include <conio.h>
#include <string.h>

const int MAX = 80;

void main()
{
    clrscr();
    char str1[] = "www.Vishalpatil.com";

    char str2[MAX];
    strcpy(str2, str1);

    cout << endl;
    cout << str2;

    getch();
}
