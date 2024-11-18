// Author: sandeep172918
// Date: 2024-11-18 17:06:13
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=1;i<=(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin()+1,v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n) vector<lli>v(n)
#define vec2(v,n) vector<vector<lli>>v(n)
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
using namespace std;
const int MOD=1e9+7;
int main(){
lli n;
    cin >> n;
   vector<lli>v(n+1);
   fr(i,n){
    cin>>v[i];
   }
   
   vector<lli>w=v;
   
   srt(v);
   if(v==w){
    cout<<"yes"<<endl;
   cout<<"1"<<" "<<"1";
   }else{
   
   vector<lli>x;

   fr(i,n){
    if(w[i]!=v[i]){
       
       x.push_back(i);
    }
    }
     
    lli c=x[0];
    lli d=x.size()-1;
    lli e=x[d];
    lli flag=0;
    for(lli i=c;i<e;i++){
     if(w[i]< w[i+1]){
        flag=0;
        break;
     }else{
        flag=1;
     }
   }
  
   if(flag){
    cout<<"yes"<<endl;
    cout<<c<<" "<<e<<endl;
   }else{
    cout<<"no"<<endl;
   }




   }


  
}