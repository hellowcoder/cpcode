#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,a,b;
cin>>n>>m>>a>>b;
int ans=((n/m)*b)+((n%m)*a);
int ans2=(((n/m)+1)*b);
int final=min(ans,ans2);
cout<<min(final,(n*a));
}