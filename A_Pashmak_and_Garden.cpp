// Author: sandeep172918
// Date: 2024-11-20 08:56:21
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
int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
if(x1==x2 || y1==y2){
    if(x1==x2){
        int k=abs(y2-y1);
        cout<<x1+k<<" "<<y1<<" "<<x2+k<<" "<<y2;
    }
    if(y1==y2){
        int k=abs(x2-x1);
        cout<<x1<<" "<<y1+k<<" "<<x2<<" "<<y2+k;
    }
}else{
    if((abs(x2-x1))==(abs(y2-y1))){
        if((x2-x1)*(y2-y1)>=0){
            int k=abs(x2-x1);
            if(x2>x1){
            
            cout<<x1+k<<" "<<y1<<" "<<x1<<" "<<y1+k;
            }else{
            
            cout<<x2+k<<" "<<y2<<" "<<x2<<" "<<y2+k;
            }
        }
        if((x2-x1)*(y2-y1)<=0){
            int k=abs(x2-x1);
            if(x2>x1){
            
            cout<<x1+k<<" "<<y1<<" "<<x1<<" "<<y1-k;
            }else{
            
            cout<<x2+k<<" "<<y2<<" "<<x2<<" "<<y2-k;
            }
        }

    }else{
        cout<<"-1";
    }
}
 
}