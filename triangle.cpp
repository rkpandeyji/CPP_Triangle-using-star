/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<< "Enter ur number: ";
    int n;
    cin>>n;
    for(int i =1; i<=n; i++)
    {
    	for(int j =1; j<=n; j++)
    	{
    		cout<<"* ";
		}
		
		cout<<endl;
	}


    return 0;
}
*/

/*
//Increasing triangle

#include <bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter your number: ";
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}
*/


/*
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
*/


/*
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

*/


/*
//inverted right sided triangle
#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Enter ur number: ";
	int n;
	cin>>n;
	
     	for(int i =1; i<=n; i++)
        {
	      for(int j = 1; j<=i; j++)
	      {
	     	cout<<"  ";
	      }
	      for(int k=i; k<=n; k++)
	      {
	      	cout<<"* ";
		  }
	     cout<<endl;	
	    }
		
	 
	return 0;
}

*/


//Hill pattern;
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter ur number:";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j = i; j<=n; j++)
		{
			cout<<"  ";
		}
		for(int k = 1; k<=i; k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	return 0;
}
