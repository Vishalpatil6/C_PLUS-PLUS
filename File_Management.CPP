// Program to create File and Write
// Strings/Text Lines to File

#include <fstream.h>
#include <conio.h>

void main()
{
	clrscr();
	
	ofstream out("test.txt");
	out << "C++ Programming Examples\n";
	out << "Nils Techsys,Ahmedabad\n";
	cout << "\nData Written in File.";
	out.close();
	
	getch();
}
