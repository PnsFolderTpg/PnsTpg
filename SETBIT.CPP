//set bit to kth position
#include<iostream.h>
long long setbit(long long n, long long k)
{
    return ( n | (1 << k));
}
int main()
{
    long long n,k;
    cin>>n>>k;
    cout<<setbit(n,k)<<"\n";
    return 0;
}
