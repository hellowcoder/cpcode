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

int binarysearch(const vector<lli>& y, lli target) {
    int low = 0, high = y.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (y[mid] >= target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return y[low]; 
}






int main(){
lli T; //number of test cases.
cin >>T;
vec(v,T);
vec(y,T);
fr(i,T){
    cin>>v[i];
} 
fr(i,T){
    cin>>y[i];
}
srt(y);
fr(i,T){
   int k=v[i];
   int m=binarysearch(y,k);
   cout<<m<<" ";
}
 
}