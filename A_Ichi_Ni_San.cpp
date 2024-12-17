#include <bits/stdc++.h>
using namespace std;
int main(){
int n; //number of test cases.
cin >>n;
while(n!=0){
    int c=n%10;
    switch(c){
case 0: cout<<"O-|-OOOO"<<endl;break;
case 1: cout<<"O-|O-OOO"<<endl;break;
case 2: cout<<"O-|OO-OO"<<endl;break;
case 3: cout<<"O-|OOO-O"<<endl;break;
case 4: cout<<"O-|OOOO-"<<endl;break;
case 5: cout<<"-O|-OOOO"<<endl;break;
case 6: cout<<"-O|O-OOO"<<endl;break;
case 7: cout<<"-O|OO-OO"<<endl;break;
case 8: cout<<"-O|OOO-O"<<endl;break;
case 9: cout<<"-O|OOOO-"<<endl;break;
}
    n/=10;
}
}