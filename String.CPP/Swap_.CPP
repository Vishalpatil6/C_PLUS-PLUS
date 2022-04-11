// Program to Swap Two Strings.

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
    clrscr();
    char str1[25], str2[25], tmp[25];

    cout << "\n Enter Two String ::: ";
    cin >> str1 >> str2;

    cout << "\n Strings Before Swapping are : \n";
    cout << " 1. " << str1 << ", 2. " << str2;

    strcpy(tmp, str1);
    strcpy(str1, str2);
    strcpy(str2, tmp);

    cout << "\n Strings After Swapping are  : \n";
    cout << " 1. " << str1 << ", 2. " << str2;

    getch();
}
