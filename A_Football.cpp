#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int flag=0;
for(int i=0;i<sizeof(s);i++){
    int count=1;
    int dang=INT_MIN;
    for(int k=i+1;k<sizeof(s);k++){
        if(s[i]==s[k]){
            count++;
        }else{
            break;
        }
    }
    dang=max(dang,count);
    if(dang>=7){
        flag=1;
        break;
    }else{
        continue;
    }
}
if(flag==1){
    cout<<"YES"<<endl;
}else if(flag==0){
    cout<<"NO"<<endl;
}


}