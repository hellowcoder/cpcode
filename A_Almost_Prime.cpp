#include <bits/stdc++.h>
using namespace std;
int checkprime(int n){
    if (n==2){
        return 1;
    }else if (n==1){
        return 0;
    }else{
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return 0;
        }else{
            return 1;
        }
    }
    }
    return 0;
}
// int primediv(int n){
//  int count =0;
// for(int i=2;i<=n;i++){
//     int x;
//     x=n%i;
//     if(x==0){
//         if(checkprime(i)){
//             count++;
//         }
//     }
// }
//return count;
//}
int main(){
int n; //number of test cases.
cin >>n;
if(checkprime(n)){
    cout<<"yes";
}else{
    cout<<"no";
}
// int ans=0;
// if(n<6){
//     cout << "0"<<endl;
// }else{
    
// for (int i=6;i<=n;i++){

//     if(primediv(i)==2){
//         ans++;
//     }
// }

// }
// cout<< ans <<endl;
}