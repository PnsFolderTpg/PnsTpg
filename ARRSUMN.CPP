#include<iostream.h>
#include<bits/stds++.h>
//#include<vector.h>
using namespace std;
int n;
//int arr[4]={1,2,4,6};
int N;
void printarraycomb(int ind, int N, vector<int> &ds,int a[])
{
  if (ind==n)
  {
    if(N==0)
    {
      for(auto it::ds)
      {
	cout<<it<<" ";
      }
      cout<<"\n";
    }
    return;
  }
  // logic
  if(a[ind]<=N)
  {
    ds.push_back(a[ind]);
    printarraycomb(ind,N-a[ind],ds,a);
    ds.pop_back();
  }
  //non pick
  printarraycomb(ind+1,N,ds,a);
}

int main()
{
  cin>>n>>N;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  vector <int>res;
  printarraycomb(0,N,res,arr);
  return 0;
}