//balanced paranthasys
/*sample input
5
1 -1 2 3 -2
output
2
*/

#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n-1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	stack<int>st;
	st.push(0);
	int len=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0)
		{
			st.push(i);
			continue;
		}
		if(st.top()==-1*a[i])
		{
			st.pop();
			len=max(len,i-st.top());
		}
		else{
			st.push(i);
		}
	}
	cout<<len<<endl;
	return 0;
}
