#include <bits/stdc++.h>
using namespace std;
int main(){
int x;
cin >>x;
int step=0;
step+= (x/5);
    x%=5;
step+=(x/4);
    x%=4;
step+=(x/3);
    x%=3;
step+=(x/2);
    x%=2;
step+=(x/1);
    x%=1;

cout << step;


}