// Program to Write Object to File

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
	ofstream out("person.txt");
	
	p.getData();
	out.write((char*)&p, sizeof(p));
	
	out.close();
	getch();
}
