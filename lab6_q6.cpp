#include<iostream>
using namespace std;
// declaring the function to sum all even nubers between two numbers
int sumEvenNumbers(int i , int j)
{
	int sum =0;
	//using condition to give i the value from which summation has to be started
	if (i&2==0)
	{	
		i=(i+2);
	}
	else 
	{
		i=(i+1);
	}
	//using while loop to sum the numbers
	while(i<j)
	{		
		sum = (sum +i);
		i=(i+2);
	}
	// returning the value
	return sum; 
}
// declaring the function to sum all odd nubers between two numbers
int sumOddNumbers(int i, int j)
{
	int sum =0;
	//using condition to give i the value from which summation has to be started
	if (i&2==0)
	{	
		i=(i+1);
	}
	else 
	{
		i=(i+2);
	}
	//using while loop to sum the numbers
	while(i<j)
	{		
		sum = (sum +i);
		i=(i+2);
	}
	// returning the value
	return sum; 
}
// declaring the function to sum square of all odd nubers between two numbers
int sumSquareOddNumbers (int i , int j)
{
	int sum =0;
	//using condition to give i the value from which summation has to be started	
	if (i&2==0)
	{	
		i=(i+1);
	}
	else 
	{
		i=(i+2);
	}
	//using while loop to sum the numbers
	while(i<j)
	{		
		sum = (sum +(i*i));//squaring the number
		i=(i+2);
	}
	// returning the value
	return sum;
}
// declaring the function to sum square of all even nubers between two numbers
int sumSquareEvenNumbers(int i,int j)
{
	int sum =0;
	//using condition to give i the value from which summation has to be started		
	if (i&2==0)
	{	
		i=(i+2);
	}
	else 
	{
		i=(i+1);
	}
	//using while loop to sum the numbers
	while(i<j)
	{		
		sum = (sum +(i*i));//squaring the number
		i=(i+2);
	}
	// returning the value
	return sum; 
}
int main()
{
	int a , b;
	//asking for the input
	cout <<"what are the two numbers in which u want to sum? ";
	cin >> a >>b;
	// assigning the values of functions to the variable by calling functions
	int sumEvenNumber = sumEvenNumbers(a,b);
	int sumOddNumber = sumOddNumbers(a,b);
	int sumSquareEvenNumber = sumSquareEvenNumbers(a,b);
	int sumSquareOddNumber = sumSquareOddNumbers(a,b);
	//output
	cout <<"sum of even numbers is "<< sumEvenNumber<<endl;
	cout <<"sum of odd numbers is "<< sumOddNumber<<endl;
	cout <<"sum of square of even numbers is "<< sumSquareEvenNumber<<endl;
	cout <<"sum of square of odd numbers is "<< sumSquareOddNumber<<endl;
}





