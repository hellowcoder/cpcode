// Author: sandeep172918
// Date: 2024-11-18 00:58:00
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
using namespace std;
const int MOD=1e9+7;
int main(){
    int arr[8]={1,10000,4,5,678,2,23,100000};priority_queue<int,vector<int>,greater<int>>pq;
    fr(i,8){
      pq.push(arr[i]);
    }
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
}