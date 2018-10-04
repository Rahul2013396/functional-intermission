#include<iostream>
using namespace std;
//declaring the function
int maximum(int a , int b)
{
	int max;
	//using conditions to determine the larger value
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
	//returning the larger value
	return max;
}

int main ()
{
	int a,b;
	//asking for input
	cout << "what are the numbers you want to compare? ";
	cin>> a >> b;
	//calling the function	
	cout << "the maximum number is "<< maximum(a,b);
	return 0;
}
