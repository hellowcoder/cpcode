#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int flag=0;
if(s.size()<5){
    cout<<"NO";
}else{
    
    int x=s.size();
    for(int i=0;i<x;i++){
      if(s[i]=='h'){
        for(int k=i+1;k<x;k++){
            if(s[k]=='e'){
                for(int j=k+1;j<x;j++){
                    if(s[j]=='l'){
                        for(int l=j+1;l<x;l++){
                            if(s[l]=='l'){
                                for(int m=l+1;m<x;m++){
                                    if(s[m]=='o'){
                                        flag=1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      }
  


    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}

}