// In-place sort 2 sorted given arrays
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
    if(arr[i]==Arr[j])
    {
      i++; j++; 
      continue;
    }
    else if(arr[i]>Arr[j])
     {
     	  int temp = arr[i];
        arr[i] = Arr[j];
        Arr[j]= temp;
        int k = j;
        while(k<m-1 && Arr[k]>Arr[k+1])
        {
           swap(Arr[k], Arr[k+1]);
           k++;
        }
     }
     i++;

    
  }

cout<<"{ ";
   for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
cout<<"}\n";
cout<<"{ ";
    for(int i=0; i<m; i++)
  {
    cout<<Arr[i]<<" ";
  }
cout<<"}\n";  

}