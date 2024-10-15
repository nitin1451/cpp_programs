#include<iostream>
using namespace std;
int main ()
{
	int n=4;
	char ch ='A';
	
	for (int line =1; line<=n; line++)
	{
		for (int star=1; star<=line; star++)
		{
			printf("%c",ch);
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
