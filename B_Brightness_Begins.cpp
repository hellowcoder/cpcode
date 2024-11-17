// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e18;
// long long int hash[N];
// int main(){
// int n; //number of test cases.
// cin >>n;
// long long int arr[];
// for(long long int  i=0;i<N;i++){
//     arr[i]=i;
// }
// for(long long int  i=2;i<arr[i];i++){
//    if(arr[i]%i==0){
//     hash[arr[i]]++;
//    }
   
// }
// while(n--){
// long long int x;
// cin >>x;
// for(long long int i=1;i<N;i++){
//     if()
// }
// }

// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long k, l = 1, r = 2e18;
        cin >> k;
        while(r-l > 1){
            long long mid = (l+r)>>1;
            long long n = mid - int(sqrtl(mid));
            if(n >= k) r = mid;
            else l = mid;
        }
        cout << r << "\n";
    }
    return 0;
}