#include<iostream.h>
int main(){
 long long int t,l,r,sum;
 short flag;
 cin>>t;
 while(t--){
  cin>>l>>r;
  sum=0;
  if(l==1)l=2;
  while(l<=r){
    flag=0;
    for(int i=2;i<=l/2;i++){
     if((l%i)==0){flag=1;break;}
    }
    if(flag==0)sum+=l; //cout<<l<<endl;
    l++;
  }
  cout<<sum<<endl;
 }
 return 0;
}