#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n, no_of_zeroes=0, no_of_ones=0; 
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]==0)no_of_zeroes++;
		else no_of_ones++;
	}

	int i=0;	
	while(no_of_zeroes--)
	{
		arr[i++]=0;
	}

	while(no_of_ones--)
	{
		arr[i++]=1;
	}

	cout<<"{ ";
	for(int j=0; j<n; j++)
	{
		cout<<arr[j];
		if(j!=n-1)cout<<", ";
	}
	cout<<" }\n";

}