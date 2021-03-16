#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin>>s;

	stack<char> st;
	int f=0, n=s.length();

	st.push(s[0]);
	for(int i=0; i<n-1; i++)
	{
		if(s[i+1]=='[' || s[i+1]=='(' || s[i+1]=='{')
		{
             st.push(s[i+1]);
		}
		else if(s[i+1]==']') 
		{
			if(st.empty() || st.top()!='[')
				{
					f=1;
					cout<<"NOT BALANCED"<<"\n";
					break;
				}
			else  st.pop();
		}
		else if(s[i+1]==')' )
		{
			if(st.empty() || st.top()!='(')
				{
					f=1;
					cout<<"NOT BALANCED"<<"\n";
					break;
				}
			else st.pop();
		}
		else if(s[i+1]=='}'|| st.top()!='{')
		{
			if(st.empty() || st.top()!='{')
				{
					f=1;
					cout<<"NOT BALANCED"<<"\n";
					break;
				}
			else st.pop();
		}
	}

	if(st.empty() && f!=1)cout<<"BALANCED"<<"\n";
	else if(f!=1) cout<<"NOT BALANCED"<<"\n";
	return 0;
}