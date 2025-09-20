//Author: sandeep172918
//Date: 2025-09-07 14:45

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
 
void solve(){
lli n,k;cin>>n;
vpr p(n);
fr(i,n)cin>>p[i].ff>>p[i].ss;

cin>>k;
vll v(k);
fr(i,k)cin>>v[i];
vvll t(n);
fr(i,n){
    lli mini=p[i].ff;
    lli maxi=p[i].ss;
    fr(j,k){
        if(v[j]>=mini  && v[j]<=maxi)t[i].psb(v[j]);
    }
}
vll ans;
fr(i,n-1){
    bool bol=false;
    if(p[i].ss==p[i+1].ff)bol=true;
    if(t[i].size()>2){
        cout<<"impossible\n";
        return;
    }
    else if(t[i].size()==2)continue;
    else if(t[i].size()){
    
        lli check=t[i+1].size();   //curr ==1

        if(bol){
            if(check==2){
            //  
            
            }else if(check==1){
               if(t[i][0]==p[i+1].ff)
                    ans.push_back(t[i][0]-1);
                 else{
                    ans.push_back(p[i+1].ff);
                    t[i+1].push_back(p[i+1].ff);
                 }   
            }else{
                ans.push_back(p[i+1].ff);
                t[i+1].push_back(p[i+1].ff);
            }
        }else{
            ans.push_back(t[i][0]+1);
        }


    }else{
        lli check=t[i+1].size();
        if(bol){
            if(check==2){
                ans.push_back(p[i].ss-1);
                ans.push_back(p[i].ss-2);
            }else{
                ans.push_back(p[i].ss);
                ans.push_back(p[i].ss-1);
                t[i+1].push_back(p[i].ss);
                
            }
        }else{
             ans.push_back(p[i].ss);
            ans.push_back(p[i].ss-1);
        }
    }
}if(t[n-1].size()>2){
    cout<<"impossible\n";
    return;
}
if(t[n-1].size()==1){
    lli clip = t[n-1][0];
    if(clip==p[n-1].second) {
        ans.push_back(p[n-1].second-1);
    } 
    else {
        ans.push_back(p[n-1].second);
    }
}
else if(t[n-1].size()==0) {
    ans.push_back(p[n-1].second);
    ans.push_back(p[n-1].second-1);

}

cout<<ans.size()<<'\n';
out(ans);
}

int32_t main(){
fastio;
lli tt=1;

while(tt--){
solve();
}
}