#include <bits/stdc++.h>
#define fr(i,n) for(long long int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
lli n; //number of test cases.
std::cin >>n;

 vector<lli>v(n);
 vector<lli>y(n);  //prefix sum
 
 
fr(i,n){
   std:: cin>>v[i];
}
y[0]=v[0];
fr(i,n-1){
 y[i+1]=y[i]+v[i+1];
} 

vector<lli>z; 
fr(i,n){
    for(lli k=i;k<n;i++){
       
        
        int g=y[k]-(i>0 ? y[i-1]: 0 );
        z.push_back(g);
       
    }
}
lli u=z.size();
vector<int>f(u);
f[0]=z[0];
fr(i,u-1){
 f[i+1]=z[i+1]+f[i];
}
lli x;std::cin>>x;

while(x--){
    lli l,r;std::cin>>l>>r;
    l--;r--;
    lli sumg=f[r]-(l>0?f[l-1]:0);
    cout<<sumg<<endl;
}
 
}