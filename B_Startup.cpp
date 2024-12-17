#include <bits/stdc++.h>
#define fr(i,n) for(int i=1;i<=(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
int x,y;cin>>x>>y;
vector<pair<int,int>>v(y+1);
fr(i,y){
     int a,b;cin>>a>>b;v[a].first++;v[a].second+=b;
}
sort(v.begin()+1, v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {  //lamda
            return a.second > b.second; 
        });int sum=0;
for(int i=1;i<=min(x,y);i++){sum+=v[i].second;}
cout<<sum<<endl;
}
}

