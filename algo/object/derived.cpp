//Author: sandeep172918
//Date: 2025-08-26 21:35

#include <bits/stdc++.h>
using namespace std;
#define lli long long int

class base{
  private:
   lli a,b;
   protected:
   lli c,d;
   public:
   lli e,f;
   void set_ab(lli i,lli j){
     a=i;
     b=j;
   }
   void set_cd(lli i,lli j){
    c=i;
    d=j;
   }
   void set_ef(lli i,lli j){
    e=i;
    f=j;
   }

};

class derv:protected base{
   private:
    lli g,k;
   public:
    void set_gk(lli i,lli j){
     g=i;
     k=j;
    } 
    
    void show_cd(){
        cout<<c<<' '<<d<<'\n';
    }
    void show_ef(){
        cout<<e<<' '<<f<<'\n';
    }
     void show_gk(){
        cout<<g<<' '<<k<<'\n';
    }
};

int32_t main(){
  derv d;

  d.show_cd();
}

