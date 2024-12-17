#include <bits/stdc++.h>
#define fr(i,n) for(int i=1;i<=(n);i++)
#define lli long long int
#define srt(v) sort(v.begin(),v.end())
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
 
while(n--){
int x;
cin>>x;
// if(x==1){
//     int p;
//     cin>>p;
//     if(p>0){
//         cout<<"0"<<endl;
//     }else{
//         cout<<p*(-1)<<endl;
//     }
// }else{
int v[x][x];
fr(i,x){
    fr(k,x){
        cin>>v[i][k];
    }
}
int final=0;
fr(i,x){
    int mini=INT_MAX;
    // for(int k=1,l=i;(k<=x)&&(l<=x);k++,l++){
    //     mini=min(mini,v[k][l]);
    // }
    int k=1,l=i;
    while((k<=x)&&(l<=x)){
        mini=min(mini,v[k][l]);
        k++;
        l++;
    }
    if(mini>0){
        mini=0;
    }
    final+=mini;
}
for(int i=2;i<=x;i++){
    int mini=INT_MAX;
    // for(int l=i,k=1;(k<=x)&&(l<=x);k++,l++){
    //     mini=min(mini,v[l][k]);
    // }
    int l=i,k=1;
    while((l<=x)&&(k<=x)){
        mini=min(mini,v[l][k]);
        k++;
        l++;
    }
    if(mini>0){
        mini=0;
    }
    final+=mini;
}
cout<<final*(-1)<<endl;

}


}
 
