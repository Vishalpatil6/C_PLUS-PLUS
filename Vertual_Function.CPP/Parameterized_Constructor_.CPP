// Program to explain Parameterized Constructor and Destructor
// in Hierarchical Inheritance with virtual Destructor and Dynamic
// Memory Allocation

#include <iostream.h>
#include <conio.h>

class A
{
  private:
    int *px;

  public:
    A(int a)
    {
        px = new int(a);
        cout << "\n A\'s Para. Constructor.";
    }

    virtual ~A()
    {
        cout << "\n A\'s Destructor.";
        delete px;
    }

    virtual void show()
    {
        cout << "\n x : " << *px;
    }
};

class B : public A
{
  private:
    int *py;

  public:
    B(int a, int b) : A(a)
    {
        py = new int(b);
        cout << "\n B\'s Para. Constructor.";
    }

    ~B()
    {
        cout << "\n B\'s Destructor.";
        delete py;
    }

    void show()
    {
        cout << "\n y : " << *py;
    }
};

class C : public A
{
  private:
    int *pz;

  public:
    C(int a, int c) : A(a)
    {
        pz = new int(c);
        cout << "\n C\'s Para. Constructor.";
    }

    ~C()
    {
        cout << "\n C\'s Destructor.";
        delete pz;
    }

    void show()
    {
        cout << "\n z : " << *pz;
    }
};

void main()
{
    clrscr();

    A *p;
    p = new A(10);
    p->show();
    delete p;

    p = new B(10, 20);
    p->show();
    delete p;

    p = new C(10, 30);
    p->show();
    delete p;

    getch();
}
