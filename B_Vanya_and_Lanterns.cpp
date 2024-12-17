#include <bits/stdc++.h>
using namespace std;
int main(){
double n,l; //number of test cases.
cin >>n>>l;
vector<double>bulb(n);
for(int i=0;i<n;i++){
    cin>>bulb[i];
}if(n==1){
   double result=max((l-bulb[0]),(bulb[0]));
   cout<<fixed<<setprecision(10)<<result;
}else{
sort(bulb.begin(),bulb.end());
double ans1=bulb[0]-0;
double ans2=l-bulb[n-1];
double ans3=max(ans1,ans2);
vector<double>radius;
for(int i=1;i<n;i++){
    double x=(bulb[i]-bulb[i-1])/2.00;
    radius.push_back(x);
}
sort(radius.rbegin(),radius.rend());
double y=radius[0];
cout<<fixed<<setprecision(10)<< max(y,ans3);
}
}
