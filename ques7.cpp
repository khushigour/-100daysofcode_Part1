#include <iostream>
using namespace std;

int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	for(int i=0; i<n; i++)
	{
		 if(arr[i])
		 	{
		 		A[i]=A[i-1]+1;
		 		B[i] = B[i-1];
		 	}
		 else 
		 	{
		 		A[i] = A[i-1];
		 		B[i] = B[i-1] + 1;
		 	}
	}
}