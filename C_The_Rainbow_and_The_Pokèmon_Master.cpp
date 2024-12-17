#include <bits/stdc++.h>
using namespace std;
int main(){
long long int p1,p2; //number of test cases.
cin >>p1>>p2;
vector<long long int>p1_a(p1);
vector<pair<long long int,long long int>>p2_a(p2);
for(long long int i=0;i<p1;i++){
  cin>>p1_a[i];
}
for(long long int i=0;i<p2;i++){
    cin>>p2_a[i].first>>p2_a[i].second;
    
}
sort(p2_a.begin(),p2_a.end());
for(long long int i=0;i<p1;i++){
    long long int point=0;
    for(long long int k=0;k<p2;k++){
        // sum+=p2_a[k].first;
        // sum2+=p2_a[k].second;
        if(p2_a[k].first<=p1_a[i]){
         point+=p2_a[k].second;
        }else{
            break;
        }
    }
    cout<<point<<" ";
}
}
