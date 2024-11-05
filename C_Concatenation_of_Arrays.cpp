#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
int x;
cin>>x;
pair<int,int>v;
pair<int,int>w;
for(int i=0;i<x;i++){
    int x,y;
    cin>>x>>y;
    v[i].first=x;
    v[i].second=y;
    w[i].first=x+y;
    w[i].second=i;
}
}

}