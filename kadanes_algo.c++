#include<bits/stdc++.h>
using namespace std;

int kandanes(int l, int arr[])
{
int curr=arr[0];
int overall=0;
for(int i=0; i<l; i++)
{
     curr=max(arr[i],curr+arr[i]);
     overall= max(overall,curr);
}
return overall;
}
int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0; i<n; i++)
cin>>arr[i];

cout<<kandanes(n,arr);
return 0;
}

//when input is large
/*
    long long maxSubarraySum(int arr[], int n){
    long long  curr=0;
    long long  max1=INT_MIN;
    for(int i=0; i<n; i++)
    {
         curr=curr+arr[i];
         if(curr>max1)
         max1=curr;
         if(curr<0)
         curr=0;
         
         
    }
    return max1;
        } 
*/