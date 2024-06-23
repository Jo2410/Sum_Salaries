#include<iostream>
using namespace std;
class Company
{
private:
	int salary;
	string name1,name2;

public:
	void setValue()
	{
		cout << "enter the first worker name "<<endl;
		cin >> name1;
		cout << "enter the second worker name " << endl;
		cin >> name2;
		
	}
	void print()
	{
		cout << "enter " << name1 << " salary please " << endl;
		cin >> salary;
		cout << "enter " << name2 << " salary please " << endl;
		
	}
	void print2()
	{
		cin >> salary;
	}
	int getSalary()
	{

		return salary;

	}


};


int main()
{

	cout << "to know the sum salaries of two workers " << endl;
	cout << "enter their name and the salary please " << endl;
	Company ob1;
	Company ob2;

	ob1.setValue();
	ob1.print();
	ob2.print2();
	ob1.getSalary();
	cout << "the sum salaries is "<< ob1.getSalary() + ob2.getSalary();

}