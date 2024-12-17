#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int check(vector<int>arr,int c){
    vector<int>y;
    fr(i,c){
        int k=c-i;
        if(arr[i]==k){
            y.push_back(i);
        }
    }
    if(y.size()==0){
        return -1;
    }else{
        int h=*max_element(y.begin(),y.end());
        return h;
    }



    return -1;
}
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
int c;cin>>c;
vector<int>x(c);
fr(i,c){
    cin>>x[i];
    
}
while(true){
 int idx = check(x, c);
      if(idx == -1) {
       break;
       }
   
   c+=idx;
   x.resize(c);
   fill(x.begin()+idx,x.end(),0);
}
cout<<c<<endl;
 
}}