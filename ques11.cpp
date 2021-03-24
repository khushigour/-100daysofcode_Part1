// Sort 2 given arrays
// Input: 5 3
// 1 4 7 8 10
// 2 3 9
// Output:
// 1 2 3 4 7
// 8 9 10

#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n,m; cin>>n>>m;
  int arr[n], Arr[m];
  vector<int> v;

  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }

    for(int i=0; i<m; i++)
  {
    cin>>Arr[i];
  }

  int i=0, j=0;

  while(i<n && j<m)
  {
     if(arr[i]>=Arr[j])
     {
     	v.push_back(Arr[j]);
     	j++;
     }
     else
     {
     	v.push_back(arr[i]);
     	i++;
     }
  }

  if(i!=n)
  {
  	while(i<n)
  	{
  		v.push_back(arr[i]);
  		i++;
  	}
  }
  if(j!=m)
  {
  	while(j<m)
  	{
  		v.push_back(arr[j]);
  		j++;
  	}
  }

  // for(int i=0; i<n+m; i++)
  // {
  // 	cout<<v[i]<<" ";
  // }

  for(int i=0; i<n+m; i++)
  {
  	if(i<n)arr[i]= v[i];
  	else Arr[i-n] = v[i];
 }

  for(int i=0; i<n; i++)cout<<arr[i]<<" ";
  cout<<"\n";
  for(int i=0; i<m; i++)cout<<Arr[i]<<" ";
 
  

}