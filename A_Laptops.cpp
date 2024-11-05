// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int n; //number of test cases.
// cin >>n;
// int mini=INT_MAX,maxi=INT_MIN;
// int price,qual;
// for(int i=0;i<n;i++){
//     int x,y;
//     cin>>x>>y;
//     mini=min(x,mini);
//     maxi=max(y,maxi);
//     if(mini==x){
//         price=i;
//     }
//     if(maxi==y){
//         qual=i;
//     }
   
// }
// if(price==qual){
//     cout<<"Happy Alex";
// }else{
//     cout<<"Poor Alex";
// }

// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int mini = INT_MAX, maxi = INT_MIN;
    int priceIndex = -1, qualIndex = -1; 
    

    for (int i = 0; i < n; i++) {
        int price, qual;
        cin >> price >> qual;
        if (price < mini) {
            mini = price;
            priceIndex = i;
        }
        if (qual > maxi) {
            maxi = qual;
            qualIndex = i; 
        }
    }
    if (priceIndex == qualIndex) {
        cout << "Happy Alex";
    } else {
        cout << "Poor Alex";
    }

    return 0;
}
