#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n; cin>>n;
  int arr[n];

  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }

 int i=0,j=0, end= n-1, pivot_ele = 1;

 while(j<=end)
 {
  if(arr[j]<pivot_ele)
  {
    swap(arr[i], arr[j]);
    i++;
    j++;
  }
  else if(arr[j]>pivot_ele)
  {
    swap(arr[j], arr[end]);
    end--;
  }
  else
  {
    j++;
  }
 }

cout<<"{ ";
 for(int i=0; i<n; i++)
 {
  cout<<arr[i];
  if(i!=n-1)cout<<", ";
 }
 cout<<" }\n";
}