// Find the maximum product of two integers in an array
// INPUT: 5
//-10 -3 5 6 -2
// OUTPUT: 30

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

    int arr[n];

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

    int max_v = INT_MIN, min_v = INT_MAX, max_2v, min_2v; 
	for(int i=0; i<n; i++)
	{
	  if(arr[i]>max_v)
	  {
	  	max_2v = max_v;
	  	max_v = arr[i];
	  }

	  if(arr[i]>max_2v && arr[i]<max_v)
	  {
	  	max_2v = arr[i];
	  }

	  if(arr[i]<min_v)
	  {
	  	min_2v = min_v;
	  	min_v = arr[i];
	  }

	  if(arr[i]<min_2v && arr[i]>min_v)
	  {
	  	min_2v= arr[i];
	  }

	}

	if(max_v*max_2v>min_2v*min_v)
	{
		cout<<max_2v*max_v<<"\n";
	}
	else
	{
		cout<<min_v*min_2v<<"\n";
	}
}