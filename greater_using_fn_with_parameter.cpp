#include<iostream>
using namespace std;
int greater_of_two(int , int);
int main ()
{
	int a,b,gre;
	cout<<"Enter two number : ";
	cin>>a>>b;
	gre=greater_of_two(a,b);
	cout<<"Greater number is : "<<gre;
	return 0;
}
int greater_of_two(int x, int y)
{
	int g;
	if(x>y)
	g=x;
	else
	g=y;
	return g;
}
