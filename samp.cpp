// Balanced paranthasys 

#include<iostream>
//#include<bits/stdc++>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main(){
	int t;
	char i;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int fl=1;
		stack<char>st;
		cout<<s.length()<<endl;
		for(int ch=0;ch<s.length();ch++) //for(auto i:s)
		{
			i=s[ch];
			cout<<i<<endl;
			if(i=='[' || i=='{' || i=='(')
			{			
				st.push(i);
			}
			else{
				if(i==']' && !st.empty() && st.top()=='[')
				{
					st.pop();
				}
				else if(i=='}' && !st.empty() && st.top()=='{')
				{
					st.pop();
				}
				else if (i==')' && !st.empty() && st.top()=='(')
				{
					st.pop();
				}
				else{
					fl=0;
				}
			}
		}
		if (st.size()!=0 || fl==0)
		{
			cout<<"no";
		}
		else
		{
			cout<<"yes";
		}
	}
	return 0;
}
