#include <bits/stdc++.h>
#define fr(i,n) for(int i=1;i<=(n);i++)

#define srt(v) sort(v.begin()+1,v.end())
using namespace std;

int main(){
int n;
    cin >> n;
   vector<int>v(n);
   fr(i,n){
    cin>>v[i];
   }
   
   vector<int>w=v;
   
   srt(v);
   if(v==w){
    cout<<"yes"<<endl;
   cout<<"1"<<" "<<"1";
   }else{
   
   vector<int>x;
   fr(i,n){
    if(w[i]!=v[i]){
       
       x.push_back(i);
    }
    }
     
    int c=x[0];
    int d=x.size()-1;
    int e=x[d];
    int flag=0;
    for(int i=c;i<d;i++){
     if(w[i]<w[i+1]){
        flag=0;
        break;
     }else{
        flag=1;
     }
   }
  
   if(flag){
    cout<<"yes"<<endl;
    cout<<c<<" "<<e<<endl;
   }else{
    cout<<"no"<<endl;
   }




   }


  
}