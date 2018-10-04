#include<iostream>
using namespace std;
//declaring the function
int minimum(int a , int b)
{
	int min;
	//using conditions to determine smaller value
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
	//returning the smaller value
	return min;
}

int main ()
{
	int a,b;
	//asking for input
	cout << "what are the numbers you want to compare? ";
	cin>> a >> b;
	//calling for function and giving output
	cout << "the minimum number is "<< minimum(a,b);
	return 0;
}
