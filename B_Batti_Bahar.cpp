#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
for(int i=0;i<3;i++){
    for(int k=0;k<3;k++){
        cin>>arr[i][k];
       
    }
}
for(int i=0;i<3;i++){
    for(int k=0;k<3;k++){
        arr[1][0]+=arr[0][1];
        arr[1][1]+=(arr[0][0]+arr[0][2]);
        arr[1][2]+=arr[0][1];
        
        arr[2][1]+=(arr[1][0]+arr[1][2]);
        arr[2][2]+=(arr[1][1]);
        
        arr[2][0]+=arr[1][1];
        if(arr[i][k]%2==0){
            cout<<"1";
        }else{
            cout<<"0";
        }
       
    }
    cout<<endl;
}

}