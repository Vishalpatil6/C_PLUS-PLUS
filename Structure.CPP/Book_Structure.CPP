// Program to create Book Structure

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

struct Book
{
    char name[25];
    char author[20];
    float price;
};

void main()
{
    clrscr();
    Book b;

    cout << " Enter the Name of Book ::: ";
    gets(b.name);
    cout << " Enter the Author's Name ::: ";
    gets(b.author);
    cout << " Enter the Price of the book ::: ";
    cin >> b.price;

    cout << "\n Name of the Book   ::: " << b.name;
    cout << "\n Author of the Book ::: " << b.author;
    cout << "\n Price of the Book  ::: " << b.price << "\n";

    getch();
}
