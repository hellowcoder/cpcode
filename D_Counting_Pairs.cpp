#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long
 
void run_a_case(){
    int n,x,y,ans=0,lo,hi,sum;
    cin>>n>>x>>y;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    sum=accumulate(v.begin(),v.end(),0LL);
    for(int i=0;i<n-1;i++){
        lo=lower_bound(v.begin()+i+1,v.end(),sum-y-v[i])-v.begin();
        hi=upper_bound(v.begin()+i+1,v.end(),sum-x-v[i])-v.begin()-1;
        if(hi>=lo) ans+=abs(hi-lo)+1;
    }
    cout<<ans<<"\n";
}
 
int32_t main(){
    fast_io
    int tc=1;
    cin>>tc;
    while(tc--) run_a_case();
    return 0;
}