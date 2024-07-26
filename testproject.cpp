#include<iostream>
using namespace std;
class Company
{
private:
	int salary;
	string name1,name2;

public:
	void setValue();
	void print();
	void print2();
	int getSalary();
	


}ob1,ob2;//object of class Company 


int main()
{

	cout << "to know the sum salaries of two workers " << endl;
	

	ob1.setValue();
	ob1.print();
	ob2.print2();
	ob1.getSalary();
	cout << "the sum salaries is "<< ob1.getSalary() + ob2.getSalary();

}
void Company::setValue()// get the names 
{
	cout << "enter the first worker name " << endl;
	cin >> name1;
	cout << "enter the second worker name " << endl;
	cin >> name2;

}
void Company:: print()//get the salaries 
{
	cout << "enter " << name1 << " salary please " << endl;
	cin >> salary;
	cout << "enter " << name2 << " salary please " << endl;

}
void Company::print2()
{
	cin >> salary;
}
int Company::getSalary()
{

	return salary;

}