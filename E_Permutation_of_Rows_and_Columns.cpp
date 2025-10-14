//Author: sandeep172918
//Date: 2025-10-14 23:26

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define pr pair<lli,lli>
#define vll vector<lli>
#define vbl vector<bool>
#define vpr vector<pr>
#define vvll vector<vector<lli>>
#define get(v,n) vll v(n);fr(i,n)cin>>v[i]
#define ff first
#define ss second
#define bitc(x) __builtin_popcountll(x)
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
#define out(v) fr(i,v.size())cout<<v[i]<<" ";nl
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
vpr findSwapPairs(vll &a,vll&b){
    lli n=a.size();
    vpr ans;
    map<lli,lli>m;
    fr(i,n)m[a[i]]=i;
    fr(i,n){
        // for(auto &it:m){
        //     cout<<it.ff<<' '<<it.ss<<" * ";
        // }cout<<'\n';
        if(b[i]!=a[i]){
            lli pos=m[b[i]];
            ans.push_back({i,pos});
           
            m[b[i]]=i;
            m[a[i]]=pos;
             swap(a[i],a[pos]);
        }
    }
    return ans;
}
void solve(){
lli n,m;cin>>n>>m;
vvll v(n,vll(m));
vvll t(n,vll(m));

lli x1,x2,y1,y2;
fr(i,n){
    fr(j,m){
        cin>>v[i][j];
        if(v[i][j]==1){
            x1=i;
            y1=j;
        }
    }
}
fr(i,n){
    fr(j,m){
        cin>>t[i][j];
        if(t[i][j]==1){
            x2=i;
            y2=j;
        }
    }
}
auto c=v;
vll row1(m);
vll row2(m);
vll col1(n);
vll col2(n);

fr(j,m){
    row1[j]=v[x1][j];
    row2[j]=t[x2][j];
}
fr(i,n){
    col1[i]=v[i][y1];
    col2[i]=t[i][y2];
}
vpr r=findSwapPairs(row1,row2);
vpr cc=findSwapPairs(col1,col2);

// for(auto &it:cc){
//     cout<<it.ff<<' '<<it.ss<<'\n';
// }

fr(i,n){
    for(auto &it:r){
        swap(c[i][it.ff],c[i][it.ss]);
    }
}
fr(i,m){
    for(auto &it:cc){
        swap(c[it.ff][i],c[it.ss][i]);
    }
}

fr(i,n){
    fr(j,m){
        if(c[i][j]!=t[i][j]){
            no;return;
        }
    }
}
yes;



}

int32_t main(){
fastio;
lli tt=1;
cin>>tt;
while(tt--){
solve();
}
}