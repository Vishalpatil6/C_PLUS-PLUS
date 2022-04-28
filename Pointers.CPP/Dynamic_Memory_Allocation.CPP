// Program to explain Dynamic Memory
// Allocation with String class

#include <iostream.h>
#include <conio.h>
#include <string.h>

class String
{
	char *ps;
public:
	String(char s[ ])
	{
		int len = strlen(s);
		ps = new char[len+1];
		strcpy(ps, s);
	}	

	~String()
	{
		delete ps;
	}

	void display()
	{
		cout << ps;
	}
};

void main()
{
	clrscr();
	
	String s1 = "Nils";	
	cout << "\n s1 : ";
	s1.display();

	getch();
}

 Output:

 s1 : Nils

C++ Programs. Get More Example from
https://play.google.com/store/apps/details?id=com.kapidhvaj.cppprograms
