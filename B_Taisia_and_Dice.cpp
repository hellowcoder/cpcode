#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define frs(i,s,n) for(int i=s;i<(n);i++)
#define fr1(i,n) for(int i=1;i<=(n);i++)
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
int n; //number of test cases.
cin >>n;
 
while(n--){
int x,s,r;cin>>x>>s>>r;vec(v,x);v[0]=s-r;int k=r/(x-1),rem=r%(x-1);
fr1(i,rem){v[i]=k+1;}
frs(i,rem+1,x){v[i]=k;}
fr(i,x){cout<<v[i]<<" ";}
cout<<endl;
}
 
}
