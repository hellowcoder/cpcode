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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

lli countr(lli right,lli left,lli mid){
    lli ans=mid;
    if(right>=mid-1){
        ans+=((mid*(mid+1)/2)-mid);
        lli rm=right-mid+1;
        ans+=rm;
    }
    else{
        lli m=mid-1;
        lli k=m-right;
        
       ans+=((m*(m+1)/2)-(k*(k+1)/2));
    }
   // cout<<ans<<" ";
    if(left>=mid-1){
        ans+=((mid*(mid+1)/2)-mid);
       
        lli rm=left-mid+1;
        ans+=rm;
    }else{
        mid--;
        lli k=mid-left;
        
       ans+=((mid*(mid+1)/2)-(k*(k+1)/2));
    }
    //cout<<ans<<" ";
    return ans;
}

void solve(){
lli n,m,k;cin>>n>>m>>k;
lli low=1,high=m,ans=0,remain=0;
while(low<=high){
    lli mid=(low+high)/2;
    //lli k=mid+(mid-1)*(n-1);
    lli rit=n-k;
    lli left=k-1;
    lli count=countr(rit,left,mid);
   // cout<<mid<<" "<<rit<<" "<<left<<" "<<count<<'\n';
    if(count<=m){
        ans=mid;
        
        low=mid+1;
    }else
    high=mid-1;
}
//cout<<ans<<" "<<remain<<'\n';
// if(remain>=2){
//     lli k=2;
//     while(remain>0){
//         if(remain>=k && k<=n)
//         ans++;
//         remain-=k;
//        if(k==n) k=n;
//        else
//        k++;
//     }
// }
cout<<ans;
}

int main(){
fastio;
solve();
}