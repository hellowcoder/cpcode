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
lli T; //number of test cases.
cin >>T;
 
while(T--){
lli x;
cin>>x;
lli l=1;
if(x%2){
   if(x<27) cout<<"-1"<<endl;
   else{
      cout<<"13 2 2 3 3 4 4 5 5 13 1 6 6 7 7 8 8 9 9 10 10 11 11 12 12 13 1 ";
      for(int i=14 ;i<=x/2;i++){
        cout<<i<<" "<<i<<" ";
      }cout<<endl;
   }
   }
else{
   fr(i,x/2){
      cout<<l<<" "<<l<<" ";
      l++;
   }cout<<endl;

}
 
}}