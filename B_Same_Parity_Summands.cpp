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
lli n,k;cin>>n>>k;if(n<k){cout<<"NO"<<endl;}else{
  if((n%2==0)&&(k%2==1)){   //all even
    if((n-(k-1)*2)>=2){
       cout<<"YES"<<endl; 
       fr1(i,k-1){
        cout<<"2 ";
       }cout<<(n-(k-1)*2)<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 }
  if((n%2==0)&&(k%2==0)){    //all odd or all even
    cout<<"YES"<<endl;
    fr1(i,k-1){
        cout<<"1 ";
    }
    cout<<n-k+1<<endl;
 }
  if((n%2==1)&&(k%2==1)){   //all odd
     if((n-(k-1))>=1){
       cout<<"YES"<<endl; 
       fr1(i,k-1){
        cout<<"1 ";
       }cout<<(n-(k-1))<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 }
  if((n%2==1)&&(k%2==0)){
    cout<<"NO"<<endl;
 }

}
}
 
}