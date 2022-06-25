//Decreasing Triangle;
#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter your number: ";
	int n;
	cin>>n;
	for(int i = 1; i<=n; i++)
	{
		for(int j=i; j<=n; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}
