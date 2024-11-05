#include <bits/stdc++.h>
using namespace std;
int main(){
int x;
cin >>x;
for(int i=1;i<=x;i++){
    int y;
    cin >> y;
    if(y<=1399){
        cout<< "Division 4"<<endl;
    }
    else if(y<=1599 && y>=1400){
        cout << "Division 3"<<endl;
    }
    else if(y>=1600 && y<=1899){
        cout << "Division 2"<<endl;
    }
    else if(y>=1900){
        cout << " Division 1"<<endl;
    }
}
}