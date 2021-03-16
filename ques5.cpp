// Find the largest subarray formed by consecutive integers

// Input:  { 2, 0, 2, 1, 4, 3, 1, 0 }
// Output: Subarray from index: 1 till index: 5


#include <bits/stdc++.h>
using  namespace std;

bool consecutive(int min, int max, int arr[], int i, int j)
{
	if(max-min!=j-i)
	{
		return false;
	}

	vector<bool> visited(j-i+1);

	for(int k=i; k<=j; k++)
	{
		if(visited[arr[k]-min])
		{
			return false;
		}
		visited[arr[k]-min]=true;
	}

  return true;
}

int main()
{
	int n; cin>>n;
	int arr[n];

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	int str=0, end=0, len=1;
	for(int i=0; i<n; i++)
	{
		int min_ele= arr[i], max_ele = arr[i];
		for(int j=i+1; j<n; j++)
		{
			min_ele = min(arr[j],min_ele);
			max_ele = max(arr[j],max_ele);

			if(consecutive(min_ele, max_ele, arr, i, j))
			{
				if(len<max_ele-min_ele+1)
				{
					len = max_ele - min_ele + 1;
					str = i; end = j;
				}
			}
		}
	
	}

	cout<<"Subarray from index: "<<str<<" till index: "<<end<<"\n";
}