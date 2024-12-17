#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
int t;
cin>>t;
vector<int>vec(t);
int mini=INT_MAX;
int maxi=INT_MIN;
for(int i=0;i<t;i++){
    cin>>vec[i];
    mini=min(mini,vec[i]);
    maxi=max(maxi,vec[i]);
}
cout<<(maxi-mini)*(t-1)<<endl;

}
}