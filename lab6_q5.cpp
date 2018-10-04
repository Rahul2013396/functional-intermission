#include<iostream>
using namespace std;
//declaring function for summation using callout method
int sum(int a,int b)
{
	return (a+b);
}
//declaring a function to determine the larger number using callout method
int maximum(int a , int b)
{
	int max;
	if (a>b)
	{
		max=a;
	}	
	else if (a<b)
	{
		max=b;
	}
	else 
	{
		cout <<"numbers are equal";
	}
	return max;
}
//declaring a function to determine the smaller value using callout method
int minimum(int a , int b)
{
	int min;
	if (a<b)
	{
		min=a;
	}	
	else if (a<b)
	{
		min=b;
	}
	else 
	{
		cout <<"numbers are equal";
	}
	return min;
}
int main ()
{
	int a,b,c;
	//asking for input
	cout << "what are the two numbers? ";
	cin >> a>>b;
	//asking for input to know which function to use
	cout <<"input 1 for summation , input 2 for maximum , input 3 for minimum ";
	cin >> c;
	//using conditions to assign input value to a specific function
	// calling the function and giving output
	if(c==1)
	{
		cout << "the sum of the numbers is " <<sum (a,b);
	}
	else if (c==2)
	{
		cout << "the maximum of the two number is "<< maximum(a,b);
	}
	else if (c==3)
	{
		cout<< "the minimum of the numbers is "<< minimum(a,b);
	}
	else {cout << "invalid";}
}
	
