//PROGRAM OF COPY CONSTRUCTOR.

#include <conio.h>
#include <iostream.h>
class code
{
    int id;

  public:
    code() {} //coustructor
    code(int a)
    {
        id = a; //constructor again
    }
    code(code &x) //copy constructor
    {
        id = x.id;
    }
    void display(void)
    {
        cout << id;
    }
};

int main()
{
    clrscr();
    code A(100); //object A is created and initialized
    code B(A);   //copy constructor called
    code C = A;  //copy constructor called again

    code D; //D is created,not initialized
    D = A;

    cout << "\n Id of A: ";
    A.display();
    cout << "\n Id of B: ";
    B.display();
    cout << "\n Id of C: ";
    C.display();
    cout << "\n Id of D: ";
    D.display();
    getch();
    return 0;
}
