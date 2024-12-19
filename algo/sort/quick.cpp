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
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
const int MOD=1e9+7;

lli f(vector<lli>& v,lli low,lli high){
   lli pivot=v[low];
   lli i=low,j=high;lli partition;
   while(i<j){
       while(v[i]<=pivot&& i<high){
        i++;
       }
       while(v[j]>pivot && j>low){
        j--;
       }
       if(i<j) swap(v[i],v[j]);
       
   }
   swap(v[low],v[j]);
   return j;
}

void quick(vector<lli>& v,lli low,lli high){
    if(low<high){
        lli partition = f(v,low,high);
        quick(v,low,partition-1);
        quick(v,partition+1,high);
    }
}



int main(){
fastio;
lli x;cin>>x;vec(v,x);fr(i,x){cin>>v[i];}
lli low=0,high=x-1;
quick(v,low,high);
for(auto i : v){
    cout<<i<<" ";
}
}