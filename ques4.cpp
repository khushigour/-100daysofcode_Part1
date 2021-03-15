// Find the duplicate element in an array constaining numbers from 1 to n-1
// and only 1 duplicate is present.

// Input:  { 1, 2, 3, 4, 4 }
// Output: The duplicate element is 4

#include<bits/stdc++.h>
using namespace std;

// Approach 1
// int main()
// {
// 	int  n; cin>>n;
// 	int arr[n];
// 	for(int i=0; i<n; i++)cin>>arr[i];

//     int i;
// 	for(i=0; i<n; i++)
// 	{
// 		if(arr[arr[i]-1]<0)break;
// 		else arr[arr[i]-1]= -arr[arr[i]-1];
// 	}

// 	cout<<arr[i]<<"\n";
// }

// ------------------------------------------------------------------------
// Approach 2
// int main()
// {
// 	int n, xor1 = 0; cin>>n;
// 	int arr[n];
// 	for(int i=0; i<n; i++)
// 		{
// 			cin>>arr[i];
// 			xor1 ^=arr[i];
// 			cout<<xor1<<"\n";
// 		}

// 	for(int i=1; i<n; i++)
// 	{
// 		xor1 ^=i;
// 	}
 
// 	cout<<xor1<<"\n";
// }


//Approach3----------------------------------------------------------------
int main()
{
	int n; cin>>n; int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

    // calculte sum till n-1
	int actual_sum = n*(n-1)/2;
	int fake_sum = accumulate(arr, arr+n,0);
	cout<<fake_sum-actual_sum<<"\n";

}