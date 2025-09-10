#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli N=1;
class base{
  public:
   int* x;
   base(lli y){
     cout<<"constructor called"<<N++<<'\n';
    x= new int(y);
   }
   base(const base &b){  //deep copy
     x= new int(*b.x);  //if this is not available there will be allegation for free(): double free detected in tcache 2

   }
   ~base(){
      cout<<"destructor called"<<N++<<'\n';
     delete x;
   }

   void set_val(lli y){
    *x=y;
   }
   lli get_val(){
    return *x;
   }
};


int main(){
 base b(2);
 cout<<b.get_val()<<'\n';
 b.set_val(3);
 cout<<b.get_val()<<'\n';

 base bb=b;
 cout<<bb.get_val()<<'\n';
 bb.set_val(4);
 cout<<bb.get_val()<<'\n';



}