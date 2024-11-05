#include <bits/stdc++.h>
using namespace std;
int main(){
char n; //number of test cases.
cin >>n;
if(n>=48 && n<=58){
    cout<<"IS DIGIT";
}
if(n>=65 && n<=90){
    cout<<"ALPHA"<<endl<<"IS CAPITAL";

}
if(n>=97 && n<=122){
    cout<<"ALPHA"<<endl<<"IS SMALL";
}


}