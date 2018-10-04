#include<iostream>
using namespace std;
//defining the function
//using reference
int sum(int a,int b ,int&add)
{
	//assigning value
	add =a+b;
}

int main ()
{
	int add,a, b;
	//taking input
	cout <<"what numbers do u want to add ? ";
	cin>> a>>b;
	//using the function
	sum(a ,b , add);
	//output
	cout << "sum of the numbers is "<< add;
	return 0;
} 
	
