#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int fnc(int x);
double fnc(double x);
int fnc(int x){
    return x;

}
double fnc(double x){
    return x;
}

int main(){
cout<<fnc(1)<<'\n';
//cout<<fixed<<setprecision(9);
cout<<fnc(1.473261538729)<<'\n';
}