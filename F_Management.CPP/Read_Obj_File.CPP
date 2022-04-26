
// Program to Read Object from File

#include <fstream.h>
#include <conio.h>

class Person
{
    char name[25];
    int age;

  public:
    void getData()
    {
        cout << "Enter Name : ";
        cin.getline(name, 25);
        cout << "Enter Age : ";
        cin >> age;
    }

    void showData()
    {
        cout << "\n Name : " << name;
        cout << "\n Age  : " << age;
    }
};

void main()
{
    clrscr();

    Person p;
    ifstream in("person.txt");

    in.read((char *)&p, sizeof(p));
    p.showData();

    in.close();
    getch();
}
