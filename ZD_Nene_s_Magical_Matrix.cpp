//Author: sandeep172918
//Date: 2025-03-09 12:23
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y,0));
#define take(x) lli x;cin>>x
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
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;

void solve(){
lli x;cin>>x;
// lli check=x*(x+1)/2;
// lli bc=0;
// lli sum=0;
// fr1(i,x){
//     if(i*x>check){
//         bc=i-1;

//         break;
//     }
//     sum+=check;
// }

// if(bc>0){
//     lli sum2=0;
//     frs(i,bc+1,x+1){
//     sum2+=i*x;
//     }
//     lli sum3=0;
//     lli count=0;
//     if(bc>=2){
//         count++;
//       frs(i,2,bc+1){
//         sum2+=(i-1);
//       }
//     }
//     cout<<sum+sum2+sum3<<" "<<x+bc+count<<'\n';
//     fr1(i,x){
//         cout<<"1 "<<i<<" ";
//         fr1(j,x){
//             cout<<j<<" ";
//         }
//         cout<<'\n';
//     }
//     fr1(i,bc){
//         cout<<"2 "<<i<<" ";
//         fr1(j,x){
//            cout<<j<<" ";
//         }cout<<'\n';
//     }
//     if(count){
//        cout<<"1 1 ";
//        fr1(j,x){
//          cout<<j<<" ";
//        }
//        cout<<'\n';
//     }
// }
// else{
//     cout<<sum<<" "<<x<<'\n';
//     fr1(i,x){
//         cout<<"1 "<<i<<" ";
//         fr1(j,x){
//             cout<<j<<" ";
//         }cout<<'\n';
//     }
// }
// //cout<<bc<<'\n';
vec2(v,x+1,x+1);
fr1(i,x){
    fr1(j,x){
        v[i][j]=max(i,j);
    }
}
lli ans=0;
fr1(i,x){
    fr1(j,x){
        //cout<<v[i][j]<<" ";
        ans+=v[i][j];
    }//cout<<'\n';
}
cout<<ans<<" "<<2*x<<'\n';
fr1(i,x){
    cout<<"1 "<<i<<" ";
    for(lli j=x;j>=1;j--){
        cout<<j<<" ";
    }cout<<'\n';
    cout<<"2 "<<i<<" ";
    for(lli j=x;j>=1;j--){
        cout<<j<<" ";
    }cout<<'\n';
}
}

int32_t main(){
//fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}