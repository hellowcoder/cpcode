#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int a,b,c,d; //number of test cases.
cin >>a>>b>>c>>d;
int a1,b1,c1,d1;
a1=b1=c1=d1=0;
string s;cin>>s;
fr(i,s.size()){
    if(s[i]=='1'){
        a1++;
    }
    if(s[i]=='2'){
        b1++;
    }
    if(s[i]=='3'){
        c1++;
    }
    if(s[i]=='4'){
        d1++;
    }
} 
cout<<(a1*a+b1*b+c1*c+d1*d);
 
}