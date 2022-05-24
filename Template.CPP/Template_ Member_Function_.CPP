// Program to explain Template Member Function

#include <iostream.h>
#include <conio.h>

template <class T>
class A
{
	private:
		T x;
	public:
		A();
		A( T a );
		void show();
};

template <class T>
A<T> :: A()
{  }

template <class T>
A<T> :: A( T a )
{
  	x = a;
}

template <class T>
void A<T> :: show()
{
  	cout << "\n x = " << x;
}

void main()
{
	clrscr();

   	A<char> a1('B');
   	a1.show();

   	A<int> a2(10);
   	a2.show();

   	A<float> a3(12.34f);
   	a3.show();

   	A<double> a4(10.5);
   	a4.show();

   	getch();
}
