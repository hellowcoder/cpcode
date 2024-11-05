#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 vector<string>v(n);
fr(i,n){
   cin>>v[i];
}
//cout<<"OK"<<endl;

for(int i=0;i<n;i++){
    int count=0;
    if(i==0){
        cout<<"OK"<<endl;
    }else{
    for(int k=i-1;k>=0;k--){
        if(v[i]==v[k]){
            count++;
        }
    } 
    if(count==0){
        cout<<"OK"<<endl;
    }else{ 
        cout << v[i]<<count<<endl;
    }

    }

}


}