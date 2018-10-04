#include<iostream>
using namespace std;
//declaring the function with a reference
int minimum(int a , int b ,int&min)
{
	//using conditions to determine the smaller number and assigning the value to min
	if (a<b)
	{
		min=a;
	}	
	else if (a>b)
	{
		min=b;
	}
	else 
	{
		cout <<"numbers are equal";
	}
	
}

int main ()
{
	int min,a,b;
	//asking for input
	cout << "what are the numbers you want to compare? ";
	cin>> a >> b;
	//using the function
	minimum(a,b,min);
	//output
	cout << "the minimum number is "<<  min ;
	return 0;
}
