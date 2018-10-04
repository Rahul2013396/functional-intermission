#include<iostream>
using namespace std;
//function for going from small letter to capital letter
char toUpper(char small)
{
	//going capital
	small= (small-32);
	//returing capital letter
	return small;
}
//function for going from capital letter to small letter
char toLower(char big)
{
	//going small
	big= (big+32);
	//returning small letter
	return big;
}
//the main function
int main()
{
	//declaring variable
	char letter;
	//asking for input
	cout<<"Enter the letter"<<endl;
	cin>>letter;
	//checking if the letter is capital
	if(letter>=65 && letter<=90)
	{
		//calling toLower and output
		cout<<toLower(letter)<<endl;
	}
	//checking if the letter is small
	else if(letter>=97 && letter<=122)
	{
		//calling toUpper and output
		cout<<toUpper(letter)<<endl;
	}
	//if the letter given is not a variable
	else
	{
		cout<<"the letter is not a alphabet"<<endl;
	}
	return 0;
}
