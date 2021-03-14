// Find a pair with the given sum in an array

// Input:
// arr = [8, 7, 2, 5, 3, 1]
// sum = 10
// Output:
// Pair found at index 0 and 2 (8 + 2)
// or
// Pair found at index 1 and 4 (7 + 3)

// -------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum; cin>>n>>sum;
	int arr[n];
	unordered_map<int, int> mp;

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(mp.find(sum - arr[i])!=mp.end())
		{
			cout<<"Pair found at index "<<mp[sum-arr[i]]<<" and "<<i<<"("<<arr[i]<<"+"<<(sum-arr[i])<<")";
			break;
		}
		else
		{
			mp[arr[i]]=i;
		}
	}


}