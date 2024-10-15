#include<iostream>
using namespace std;
int main()
{
	int  n=4;
	for (int line=1;line<=n;line++)
	{
		for (int star= 1;star<=line-star+1;star++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
