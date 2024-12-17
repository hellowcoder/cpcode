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
using namespace std;
const int MOD=1e9+7;
int main(){
lli tt; //number of test cases.
cin >>tt;
 
while(tt--){
lli x;cin>>x;vec(v,x);vector<lli>ones,twos,zeros;vector<pair<lli,lli>>ans;
fr(i,x){
    cin>>v[i];
   if(v[i]==0) zeros.push_back(i);
   else if(v[i]==1) ones.push_back(i);
   else{
    twos.push_back(i);
   }
}

while(zeros.back()>ones[0] || ones.back()>twos.back()){
for(int i=zeros.size()-1;i>=0;i--){
    int z=zeros[i];
     if( !ones.empty() && z>ones[0]){
        ans.push_back({z+1,ones[0]+1}); //1 indexing
        
        lli k=ones[0];
        ones[0]=z;
        zeros[i]=k;
        
     }
}  

for(int i=0;i<twos.size();i++){
    int z=twos[i];
     if( !ones.empty() && z<ones.back()){
        ans.push_back({z+1,ones.back()+1}); //1 indexing
        
        lli k=ones.back();
        ones.back()=z;
        twos[i]=k;
     }
}
}  

cout<<ans.size()<<'\n';
for(auto i: ans){
    cout<<i.first<<" "<<i.second<<'\n';
}

}
 
}