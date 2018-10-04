#include<iostream>
using namespace std;
//the function for taking input
void input(double& uc, double& ub ,double& tr)
{
	//asking for unit cost
	cout<<"Enter the Unit cost:-";
	cin>>uc;
	cout<<endl;
	//asking for units purchased
	cout<<"Enter the number of Units bought:-";
	cin>>ub;
	cout<<endl;
	//asking for tax rate
	cout<<"Enter tax Rate";
	cin>>tr;
	cout<<endl;
}
//the function for calculating
double calculate(double cost, double units, double rate)
{
	//defining the formula
	double salesTax=cost*units*(rate/100);
	//returning the value
	return salesTax;
}
//the function for giving output
void output(double unitCost, double unitsPurch, double taxRate, double salestax, double totalDue)
{
	//outputting stuff
	cout<<"The Cost of one unit is:-"<<unitCost<<endl;
	cout<<"The number of units is:-"<<unitsPurch<<endl;
	cout<<"The Tax Rate is:-"<<taxRate<<"%"<<endl;
	cout<<"The Tax on purchase is:-"<<salestax<<endl;
	cout<<"The total due amount is:-"<<totalDue<<endl;
}
//the main function
int main()
{
	//declaring variables
	double unitCost, unitsPurch, taxRate, salesTax, totalDue;
	//calling function
	input(unitCost,unitsPurch,taxRate);
	//calculating sales tax using function
	salesTax=calculate(unitCost,unitsPurch,taxRate);
	//calculating the total due
	totalDue=(unitCost*unitsPurch)+salesTax;
	//calling the output function
	output(unitCost, unitsPurch, taxRate, salesTax, totalDue);
	return 0;
}
