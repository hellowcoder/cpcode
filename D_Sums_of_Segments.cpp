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
void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
//mathpowerstart
uint power(int x, int y, int p =  MOD){ unsigned long long res = 1; x = x % p; while (y > 0){ if (y & 1) res = (res * x) % p;
  y = y >> 1;x = (x * x) % p;} return res;}
uint modInverse(int n, int p=MOD){return power(n, p - 2, p);}
uint nCr(int n, int r, int p=MOD){if (n < r)return 0;if (r == 0)return 1;vector<int> fac(n+1,0);fac[0] = 1;
for (int i = 1; i <= n; i++) fac[i] = (fac[i - 1] * i) % p;
return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;}
 
int main(){
lli T; //number of test cases.
cin >>T;
vec(v,T+1);
fr1(i,T){cin>>v[i];}
lli x;cin>>x;
vec(y,T+1);y[0]=0;
fr1(i,T){y[i]=v[i]+y[i-1];}  //prefix done with 1 indexing
vector<lli>z;  //calculated array
fr1(i,T){
    for(lli k=i;k<=T;k++){
    lli m=y[k]-y[i-1];
    z.push_back(m);
    }
}
vector<lli>final(z.size());final[0]=z[0];    //final prefixing with 0 indexing
for(lli i=1;i<z.size();i++){
    final[i]=final[i-1]+z[i];
}
while(x--){
lli a,b;cin>>a>>b;a--;b--;
lli ans=final[b]-(a==0?0:final[a-1]);
cout<<ans<<endl;
}
return 0; 
}