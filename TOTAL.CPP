#include<iostream.h>
#include<conio.h>
class Student
{
	private:
	int rollno;
	char name[20];
	float fees;
       static float total;
       public:
	void setStudent()
	{
		cout<<"\nEnterThe Rollno=";
		cin>>rollno;
		cout<<"\nEnter The name=";
		cin>>name;
		cout<<"\nEnter The Fees=";
		cin>>fees;
		total=total+fees;
	}
	void getStudent()
	{
		cout<<"\nRollNo="<<rollno;
		cout<<"\nName="<<name;
		cout<<"\nFees="<<fees;
	}
	static void getTotal()
	{
		cout<<"\nTotal="<<total;

	}
};
	float Student::total=0;


void main()
{

		Student S1,S2,S3;
		clrscr();
		S1.setStudent();
		S2.setStudent();
		S3.setStudent();
		S1.getStudent();
		S2.getStudent();
		S3.getStudent();
		Student::getTotal();
		getch();
}

