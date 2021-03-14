// Print all subarrays with 0 sum
// INPUT:
// 10
// 3 4 -7 3 1 3 1 -4 -2 -2
// OUTPUT:
// {0....2}
// {1....3}
// {2....5}
// {5....7}
// {3....9}
// {0....9}


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum=0; cin>>n;
	int arr[n];
	unordered_multimap<int, int> mp;
	mp.insert(make_pair(0,-1));

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		sum+=arr[i];


			if(mp.find(sum)!=mp.end())
			{
				auto it= mp.find(sum);	
				while(it!=mp.end() && it->first==sum)
				{
					cout<<"{"<<it->second+1<<"...."<<i<<"}\n";
					it++;
				}	
			}
			mp.insert(make_pair(sum,i));
			
	}
}