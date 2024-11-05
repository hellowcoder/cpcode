#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
int main(){
lli a,b,c;
cin>>a>>b>>c;
a=(a%c?(a/c)+1:(a/c));
b=(b%c?(b/c)+1:(b/c));
cout<<a*b;
}