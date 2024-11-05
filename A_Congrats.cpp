#include <bits/stdc++.h>
using namespace std;
int main(){
string a,b;
cin>>a;
cin>>b;
int flag =0;
for(int i=0,j=sizeof(a)-1;i<sizeof(a),j>=0;++i,--j){
    if(a[i]==b[j]){
        flag=1;
    }else{
        flag=0;
    }
}
if(flag){
    cout<<"YES";
}else{
    cout<<"NO";
}


}