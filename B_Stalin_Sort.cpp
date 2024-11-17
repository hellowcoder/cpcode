#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define rsrt(v) sort(v.rbegin(),v.rend())
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
int x;cin>>x;
vector<int>v(x);
fr(i,x){
    cin>>v[i];
}
vector<int>u=v;
vector<int>w=v;
srt(u);
rsrt(v);
if(w==v){
    cout<<"0"<<endl;
}
else if(w==u){
    cout<<x-2<<endl;
}
else{
    vector<int>y;
   fr(i,x-1){
     if(w[i]>w[i+1]){
        int k=w[i+1];
        y.push_back(k);
     }
   }
   int count=1;
   srt(y);
   fr(i,(y.size()-1)){
    if(y[i]==y[i+1]){
        count++;
    }
   }
  cout<<count<<endl;

}
}
 
}