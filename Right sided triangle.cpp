//Right sided triangle;
#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter your number: ";
	int n;
	cin>>n;
	
	for(int i = 1; i<=n; i++)
	{
		for(int j = i; j<=n; j++)
		{
			cout<<"  ";
		}
		for(int k =1; k<=i; k++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	return 0;
}
