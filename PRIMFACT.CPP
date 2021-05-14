#include <iostream.h>
//using namespace std;
long long int N=1000001;
long long int seive[1000001];
long long int n;
void gen_modifiedsieve()
{
    seive[0]=seive[1]=1;
    //for(int i=2;i<=N;i++)seive[i]=i;
    for(int i=2;i*i<=N;i++)
    {
	if(seive[i]==i)
	{
	    for(int j=i*i;j<=N;j+=i)
	    {
		if(seive[j]==j)
		{
		    seive[j]=i;
		}
	    }
	}
    }

}

int main() {
	gen_modifiedsieve();
	int q;
	cin>>q;
	while(q--)
	{
	    int n;
	    cin>>n;
	    h=0;
	    while(n!=1)
	    {
		if (seive[n]>h) h=seive[n]; //cout<<seive[n]<<" ";
		n=n/seive[n];
	    }
	    cout<<h<<endl;
	}
	return 0;
}