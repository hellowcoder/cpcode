#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
string slcm(string s,int n){
    string final;
    fr(i,n){
        final+=s;
    }
    return final;
}
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
string a,b;

cin>>a>>b;
int x=a.size(),y=b.size();
int k=lcm(x,y);
string lcm_a=slcm(a,k/x);
string lcm_b=slcm(b,k/y);
if(lcm_a==lcm_b){
    cout<<lcm_a<<endl;
}else{
    cout<<"-1"<<endl;
}
}
 
}