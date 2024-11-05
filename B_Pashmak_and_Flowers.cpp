#include <bits/stdc++.h>
#define fr(i,n) for(long long int i=0;i<(n);i++)
#define inti long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
inti n; //number of test cases.
cin >>n;
 vector<inti>v(n);
 fr(i,n){
    cin>>v[i];
 }
 inti mini=*min_element(v.begin(),v.end());
 inti maxi=*max_element(v.begin(),v.end());
 inti c_min=count(v.begin(),v.end(),mini);
 inti c_max=count(v.begin(),v.end(),maxi);
 if(mini==maxi){
    cout<<"0"<<" "<<n*(n-1)/2<<endl;
 }else
 cout<<maxi-mini<<" "<<c_max*c_min<<endl;
 
}