#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define take(lli,x) lli x;cin>>x
#define get(v,n) vec(v,n);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;
vector<lli>prime(1e6+1e6+7,1);
vector<lli>dp(1e6+7,1);
vector<lli>ser;

void primee(vector<lli>& prime ,lli x){    //nlog(log(n))  prime harmonic series...
    for(lli i=2;i*i<=x;i++){
        if(prime[i]){
            for(lli j=i*i;j<=x;j+=i)
                prime[j]=0;
        }
    }
}

void series(){
    fr1(i,1e6+1e6){
        if(prime[i]){
            ser.psb(i);
        }
    }
}

lli mini(lli x){
    auto ans = upper_bound(all(ser), x);
    if(ans != ser.end()){
        return *ans;
    }
    return -1;
}

void print(){
    fr1(i,1e6){
        dp[i] = mini(i);
    }
}

void solve(){
    lli x;
    cin >> x;
    // vector<lli> ans(x + 1, 0);
    // ans[0]=-1;
    // while(count(all(ans),0)!=1) {
    // lli low = lower_bound(all(ans),0)-ans.begin();
    // lli high = upper_bound(all(ans),0)-ans.begin();
    // high--;
    // lli i=low,j=high;
    // while(low < high){
    //     lli sum = low + high;
    //     if(prime[sum]){
    //         ans[i] = high;
    //         ans[j] = low;
    //         low++;
    //         i++;
    //         j--;
    //         high--;
    //     } else {
    //         low++;
    //     }
    // }
    

}

   
       fr1(i,x){
            cout<<ans[i]<<" ";
        }cout<<'\n';
    
}


int32_t main(){
    fastio;
    primee(prime, 1e6 + 1e6 + 7);
    prime[0] = prime[1] = 0;
    series();
    print();
    lli tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}