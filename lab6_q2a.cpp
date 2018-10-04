#include<iostream>
using namespace std;
//defining the function
int sum(int a,int b)
{
	//returning the value
	return (a+b);
}

int main ()
{
	int a, b;
	//taking input
	cout <<"what numbers do u want to add ? ";
	cin>> a>>b;
	//calling the function
	cout << "sum of the numbers is "<< sum(a,b);
	return 0;
} 
	
