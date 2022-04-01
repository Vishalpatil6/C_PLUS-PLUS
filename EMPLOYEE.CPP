#include<iostream.h>
#include<conio.h>
class  Employee
{
	private:
	int employeeid;
	char name[20];
	float salary;
	public:
	void setEmployee()
	{
		cout<<"Getting Employye Information :";
		cout<<"\n Enter the  Employee id :";
		cin>>employeeid ;
		cout<<"\nEnter the Name : ";
		cin>>name;
		cout<<"\nEnter the Salary :";
		cin>>salary;
	}
	void getEmployee()
	{
		cout<<"\nEmployee Information is :";
		cout<<"\nEmployee id :"<<employeeid;
		cout<<"\nName :"<<name;
		cout<<"\nSalary :"<<salary;
	}

};
void main()
{
	Employee S;
	clrscr();
	S.setEmployee();
	S.setEmployee();
	getch();
}