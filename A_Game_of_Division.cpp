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
int main(){
lli tt; //number of test cases.
cin >>tt;
 
while(tt--){
lli n,k;cin>>n>>k;vec(v,n);lli flag=1,index=1;
fr(i,n){cin>>v[i];}
fr(i,n){
    fr(j,n){
        if(j==i) continue;
        else{
        lli r=abs(v[i]-v[j]);
        if(r%k!=0){
            flag=1;
        }else{
            flag=0;
            break;
        }
    }
    }
    if(flag==1){
        index=i+1;
        break;
    }
}
if(flag==1){
    cout<<"YES"<<endl<<index<<endl;
}else{
    cout<<"NO"<<endl;
}

}
 
}