#include<iostream>
#include<stack>
#include<string>
#include<vector>
//#include<vector>
using namespace std;

int main()
{
		//int nums1[1000],nums2[1000];
		int nums1[]={4,1,2};
		int nums2[]={1,3,1,4};
		/*int n1,n2;
		cin>>n1;  ////size of nums1 array
		for(int x=0;x<n1;x++){
			cin>>nums1[x];
		}
		//for(int x=0;x<n1;x++){
		//	cout<<nums1[x]<<endl;}
		cin>>n2; //size of nums2 array
		for(int x=0;x<n2;x++){
			cin>>nums2[x];
		}*/
        stack<int>stk;
        //map<int,int> mp;
        int i = sizeof(nums2)/sizeof(nums2[0]) - 1;
        cout<<i<<endl;
        //int i = nums2.size() - 1;
        while(i >= 0){
           if(stk.empty()){
               nums2[i] = -1;
               //stk.push(nums2[i]);
               cout<<stk.top()<<endl;
               i--;
               //cout<<"stack is empty"<<endl;
           }
           else if(stk.top() < nums2[i]){
               stk.pop();
           }
           else if(stk.top() > nums2[i]){
               nums2[i] = stk.top();
               stk.push(nums2[i]);
               i--;
           }
        }
        for(int x=0;x<i;x++){
            cout<<nums1[x]<<" "; 
            if(x==0)cout<<",";
        }
        return 0;
}
