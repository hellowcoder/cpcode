#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define frs(i,s,n) for(int i=s;i<(n);i++)
#define fr1(i,n) for(int i=1;i<=(n);i++)
#define lli long long int
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
using namespace std;

int binarySearch(const vector<lli>& y, lli target) {
    int low = 0, high = y.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (y[mid] >= target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low; // The position where y[low] >= target
}


int main(){
int n;cin>>n;vec(v,n);vec(y,n);
fr(i,n){
    cin>>v[i];
}
 y[0]=v[0];
 frs(i,1,n){
    y[i]=y[i-1]+v[i];
 }
 int m;cin>>m;vec(x,m);
 fr(i,m){
    cin>>x[i];
    cout<<binarySearch(y,x[i])+1<<endl;
//    fr(k,n){
//     if(y[k]>=x[i]){
//      cout<<k+1<<endl;
//      break;
//     }
//    }
 }
}