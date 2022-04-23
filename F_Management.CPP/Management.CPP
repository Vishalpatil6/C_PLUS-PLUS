// Program to create a File and Write Data
// to File Characterwise

#include <fstream.h>
#include <conio.h>

void main()
{
	clrscr();

	char str[50] = "C++ Programming Examples"\
				   "Ahmedabad";
				   
	ofstream out("test.txt");
	
	for( int i=0 ; str[ i ]!='\0' ; i++ )
	{
		out.put(str[ i ]);
	}
	cout << "\nData Written Characterwise.";
	out.close();

	getch();
}

 
