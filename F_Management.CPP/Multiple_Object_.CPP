// Program to Write and Read Multiple Objects from File

#include <fstream.h>
#include <conio.h>

class Person
{
	char name[25];
	int age;
public:
	void getData()
	{
		cout << "\nEnter Name : ";
		cin >> name;
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

	char ch;
	Person p;
	fstream file;
	file.open("person.txt", ios::app | ios::out | ios::in);

	do
	{
		cout << "Enter Person's Data : ";
		p.getData();
		file.write((char*)&p, sizeof(p));
		cout << "Enter another person(y/n) : ";
		cin >> ch;
	}while( ch=='y' || ch=='Y');
	
	file.seekg(0);
	
	file.read((char*) &p, sizeof(p));
	while( !file.eof())
	{
		p.showData();
		file.read((char*) &p, sizeof(p));
	}
	
	file.close();
	
	getch();
}

 
