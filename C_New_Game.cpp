#include <bits/stdc++.h>
using namespace std;
int main(){
int t; //number of test cases.
cin >>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.rbegin(),vec.rend());
    
    vector<int> vec_count;
    int count=1;
    for(int i=1;i<n;i++){
        if(vec[i]==vec[i-1]){
            count++;
        }else{
            vec_count.push_back(count);
            count=1;
        }
        }
        vec_count.push_back(count);
    sort(vec_count.rbegin(),vec_count.rend());
    int sum=0;
    for(int i=0;i<min(k,(int)vec_count.size());i++){
       sum+=vec_count[i];
    }
    
    cout<<sum<<endl;
    


    }
}



