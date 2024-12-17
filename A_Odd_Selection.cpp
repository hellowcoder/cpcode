#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define frs(i,s,n) for(int i=s;i<(n);i++)
#define fr1(i,n) for(long long i=1;i<=(n);i++)
#define lli long long int
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
int T; //number of test cases.
cin >>T;
 
while(T--){
lli x;int y;cin>>x>>y;lli even=0;lli odd=0;
fr1(i,x){
    int a;cin>>a;
    if(a%2){
       odd++;
    }else{
        even++;
    }
}
if(x==y){
    if(odd%2){
        cout<<"Yes"<<endl;
    }else{cout<<"No"<<endl;}
}else{
    if(y==1){
        if(odd){
            cout<<"Yes"<<endl;
        }else{cout<<"No"<<endl;}
    }
}
}
 
}