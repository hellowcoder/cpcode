//Author: sandeep172918
//Date: 2025-08-02 12:57

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v) frs(i,0,v.size()-1)cout<<v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//max(a,b)=(a+b+abs(a-b))/2
//binary search lagale bete
// four stage of dp  --think in term of index i,j whatever --find bse case --  -- find relation  -- good to go
//chicken nugget formula  max number which can be written in form of ax+by where __gcd(x,y)=1 id x*y-x-y 
//                            and total(x-1)(y-1)/2 numbers can be written in that form




long long minCost(vector<int>& basket1, vector<int>& basket2) {
        lli n=basket1.size();
        lli mini=1e9;
        map<lli,lli>m,a,b;
        fr(i,n){
            m[basket1[i]]++;
            m[basket2[i]]++;
            mini=min(mini,basket1[i]);
            mini=min(mini,basket2[i]);
            a[basket1[i]]++;
            b[basket2[i]]++;
        }
        for(auto &it:m){
            if(it.ss&1)return -1;
        }
        map<lli,lli>st;
        for(auto &it:a){
            lli mini=min(it.ss,b[it.ff]);
            lli req=(it.ss+b[it.ff])/2-mini;
            if(req>0)st[it.ff]=req;
        }
       for(auto &it:b){
            lli mini=min(it.ss,a[it.ff]);
            lli req=(it.ss+a[it.ff])/2-mini;
            if(req>0)st[it.ff]=req;
        }
        vector<pr>temp;
        for(auto &it:st)temp.push_back({it.ff,it.ss});
        srt(temp);
        n=temp.size();
        for(auto &it:temp){
            cout<<it.ff<<' '<<it.ss<<'\n';
        }
        lli ans=0;
        lli i=0,j=n-1;
        while (i < j) {
        lli cnt = min(temp[i].ss, temp[j].ss);
        lli cost = min(temp[i].ff, temp[j].ff);
        cost = min(cost, 2 * mini);
        ans += cnt * cost;

        temp[i].ss -= cnt;
        temp[j].ss -= cnt;
        if (temp[i].ss == 0) i++;
        if (temp[j].ss == 0) j--;
    }
        return ans;
    }

void solve(){
lli n,k;cin>>n;
get(v,n);
get(b,n);
cout<<minCost(v,b);
}

int32_t main(){
fastio;

solve();
}
