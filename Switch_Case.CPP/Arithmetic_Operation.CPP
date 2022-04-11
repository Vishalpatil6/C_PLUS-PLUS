// Program to perform Arithmatic Operation using
// Switch-case statement.

#include <iostream.h>
#include <conio.h>

void main()
{
	char op;
  	int a, b, res;
  	clrscr();

  	cout << " Enter two numbers ::: " ;
  	cin >> a >> b;
  	cout <<" Enter the operator (+, -, *, /, %) ::: ";
  	cin >> op;

  	switch( op )
	{
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			res = a / b;
			break;
		case '%':
			res = a % b;
			break;
		default:
			cout << " Wrong operator";
			break;
  	}

  	cout << "\n" << a << " " << op << " " << b << " = " << res;

  	getch();
}
