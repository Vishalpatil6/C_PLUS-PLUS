//PROGRAM TO SHOW THE USE OF DESTRUCTOR.

#include <conio.h>
#include <iostream.h>

class myclass
{
  private:
    int t;

  public:
    myclass()
    {
        cout << "This is A Constructor\n";
    }
    ~myclass()
    {
        cout << "This is A Destructor\n";
    }
    void set(int d)
    {
        t = d;
    }
    void show()
    {
        cout << t << endl;
    }
};

void main()
{
    clrscr();
    myclass m1, m2;
    m1.set(2);
    m2.set(6);
    m1.show();
    m2.show();
    cout << "Last Statement\n";
    getch();
}
