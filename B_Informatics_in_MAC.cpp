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
//#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

lli mexi(vector<lli>&v,vector<lli>&fre){
   fr(i,v.size()+1){
      if(fre[i]==0){
        return i;
      }
   }
   return v.size();
}
// void pre(vector<lli>&v,vector<lli>&prefix){
//      set<lli>miss;
//      fr(i,v.size()) miss.insert(v[i]);
//      for(lli i=v.size()-1;i>=0;i--){
//           miss.erase(v[i]);
//           prefix[i]=*miss.begin();
//      }
// }

void solve(){
take(lli,k);get(v,k);
//vector<lli>suffix(k),prefix(k);
//pre(v,prefix);
// if(count(all(v),0)==1){
//     cout<<"-1\n";return;
// }
vec(fre,k+1);
fr(i,k){
    fre[v[i]]++;
}
lli mex=mexi(v,fre);
// if(mex==0){
//     cout<<k<<'\n';
//     fr1(i,k){
//         cout<<i<<" "<<i<<'\n';
//     }
//     return;
// }
// map<lli,lli>m;
// fr(i,k){
//     if(v[i]<mex) m[v[i]]++;
// }

//cout<<mex<<'\n';
// fr(i,mex){
//     if(fre[i]<2){
//         cout<<"-1\n";return;
//     }
// }
set<lli>s;
lli index=-1;
vec(fre2,mex);//precalcuate the fre of tilli got all in my first group
fr(i,k){
    if(v[i]<mex){
        s.insert(v[i]);
        fre2[v[i]]++;
    }
    if(s.size()==mex){
        index=i+1;
        break;
    }
}
if(index==-1){
    cout<<"-1\n";return;
}
lli check=1;
fr(i,mex){
    if(fre[i]==fre2[i]){
        check=0;
        break;
    }
}
if(check){
cout<<"2\n";
cout<<"1 "<<index<<'\n';
cout<<index+1<<" "<<k<<'\n';
}
else cout<<"-1\n";
}

int main(){
//fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}