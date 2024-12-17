#include <bits/stdc++.h>
using namespace std;
int check(int vec[]){
    int flag=0;
    for(int i=0;i<vec.size()-1,i++){

        if(vec[i]==vec[i+1]){
            flag=1;
        }
        
    }
    return flag;
}
int main(){
int n; //number of test cases.
cin >>n;

while(n--){
int t;
vector<int>vec(t);
for(auto i=0;i<t;i++){
    cin>>vec[i];
}
if(check(vec)){
    cout<<vec.size()<<endl;
}
}

}