#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
int a,b;
cin >>a>>b;
if(a>=b){
    cout<<a<<endl;
}else{
    int k=b-a;
    if(k<a){
        cout<<a-k<<endl;;
    }else{
        cout<<"0"<<endl;
    }
}
}

}