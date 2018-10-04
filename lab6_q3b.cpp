#include<iostream>
using namespace std;
//defining the function using reference
int maximum(int a , int b ,int&max)
{
	//using conditions to determine larger value and assigning the larger value to max
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
	
}

int main ()
{
	int max,a,b;
	//aking for input
	cout << "what are the numbers you want to compare? ";
	cin>> a >> b;
	//using the function
	maximum(a,b,max);
	//output
	cout << "the maximum number is "<<  max ;
	return 0;
}
