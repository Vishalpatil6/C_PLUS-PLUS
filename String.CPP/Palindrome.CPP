// Program to check whether the
// Input String is Palindrome or not

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    char string[26];

    cout << " Enter the string (max. 25 characters) : ";
    cin.getline(string, 21);

    for (int len = 0; string[len] != '\0'; len++)
        ;

    int i, j, flag = 1;
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (string[i] != string[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag) //  if( flag != 0 )
        cout << "\n It is Palindrome.";
    else
        cout << "\n It is not a palindrome";

    getch();
}
