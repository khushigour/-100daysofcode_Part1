
// Find maximum length subarray having a given sum
// INPUT: 
// A[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }
// Sum = 8
// OUTPUT:
//From index: 3 to index: 4
// From index: 4 to index: 5
// From index: 2 to index: 5
// From index: 5 to index: 6


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, required_sum; 
	cin>>n>>required_sum;
	int sum=0, arr[n];
	unordered_multimap<int, int> mp;

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	for(int i=0; i<n; i++)
	{
			sum+=arr[i];

		if(mp.find(sum - required_sum)!=mp.end())
		{
			auto it= mp.find(sum-required_sum);

			while( it!=mp.end() && it->first==sum-required_sum)
			{
                cout<<"From index: "<<it->second+1<<" to index: "<<i<<"\n";
                it++;
			} 
		}
		mp.insert(make_pair(sum, i));
	}
}