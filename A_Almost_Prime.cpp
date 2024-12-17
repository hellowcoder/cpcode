#include <bits/stdc++.h>
using namespace std;
int checkprime(int n){
    int flag;
    if (n==2){
        return 1;
    }else if (n==1){
        return 0;
    }else{
    for(int i=2;i<=n;i++){
        if(n%i==0){
            flag=0;break;
        }else{
            flag=1;
        }
    }
    return flag;
    }
    
}
int primediv(int n){
 int count =0;
for(int i=2;i<=n;i++){
    if((n%i)==0){
        if(checkprime(i)){
            count++;
        }
    }
}
return count;
}
int main(){
int n; //number of test cases.
cin >>n;
int ans=0;
if(n<6){
    cout << "0"<<endl;
}else{
    for (int i=6;i<=n;i++){
    if(primediv(i)==2){
        ans++;
    }
}

}
cout<< ans <<endl;
}