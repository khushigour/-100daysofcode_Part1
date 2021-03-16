// Find duplicate parenthesis in an expression
// INPUT:((x+y)+(z)+(((z+y)+y)+t))
// OUTPUT: NO DUPLICATE



#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin>>s;

	int str=0, end=0;
	stack<char> st;
	int f=0, n=s.length();

	for(int i=0; i<n; i++)
	{
		if(s[i]!=')')
			{
				st.push(s[i]);
			}
		else if(s[i]==')')
		{
			if(st.top()=='(')
			{
				f=1;
				cout<<i<<"DUPLICATE FOUND\n";
				break;
			}

			while(st.top()!='(')st.pop();

			st.pop();
		}
	}
	
   if(!f)cout<<"NO DUPLICATE\n";
	return 0;
}