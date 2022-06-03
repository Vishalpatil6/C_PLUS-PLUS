//Swap two values using two variable

#include <iostream.h>
#include <conio.h>
void main()
{
    int a, b;
    clrscr();
    cout << "Enter the value of a and b:" << endl;
    cin >> a >> b;
    cout << "Before Swap:\n"
         << " A:" << a << "\n B:" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swap:\n"
         << " A:" << a << "\n B:" << b << endl;
    getch();
}
