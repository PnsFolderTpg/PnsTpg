//bit manupulation
# include<iostream>
using namespace std;

int bitsets(long long int  n){

int count=0;
while(n){

count+=(n&1);
n>>=1;

}
return count;
}

int main()
{

int q,n;
cin>>q;
while(q--){
cin>>n;
//cout<<"bit set of number\t"<<n<<"\t";
cout<<bitsets(n);
}
  return 0;
}
