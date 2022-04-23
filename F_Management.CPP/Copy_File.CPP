// Program to Copy File

#include <fstream.h>
#include <conio.h>

void main()
{  
	char ch;

	ifstream f1("test.txt");
	ofstream f2("test1.txt");
 
	if( !f1 ) 
		cerr << "\n Can't open IN file\n";
	if( !f2 ) 
		cerr << "\n Can't open OUT file\n";
   
	while(f1 && f1.get(ch)) 
		f2.put(ch);
		  
	cout << "\n File Copied Successfully.";
    
	f1.close();
	f2.close();
	getch();
}

 
