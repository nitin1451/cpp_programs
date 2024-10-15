#include<iostream>
using namespace std;
int greater_of_two(); // function declaration 
int main ()
{
	int gr;
	gr=greater_of_two(); //function calling
	cout<<"Greater number is "<<gr;
	return 0;
}
int greater_of_two () // function definition
{
	int a , b, g;
	cout<<"Enter two number ";
	cin>>a>>b;
	if (a>b)
	g=a;
	else
	g=b;
	return g;
}
