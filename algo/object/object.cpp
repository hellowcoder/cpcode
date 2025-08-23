//Author: sandeep172918
//Date: 2025-08-04 19:55

#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;


class Chai{
    private:
    lli ab;
    lli cd;
   public:
   int x;
     string name;
    
     Chai(string name): Chai(1,name){}  //deligate constructor
     Chai(lli x,string st):x(x),name(st){}  //parametersied constructor
   Chai(){   //basic constructor
    cout<<"constructor\n";
   }    
  ~Chai(){  //destructor
    cout<<"Destructor\n";
  }
  Chai(const Chai& it){  //copied constructor
      cout<<"it a copied \n";
      x=it.x;
      name=it.name;
  }
  void detail(){
    cout<<x<<" "<<name<<'\n';
  }
  friend class F;  //friend class
  friend bool comparing(const Chai&,const Chai&);  //friend function

  int getab(){  //getter
    return ab;
  }

  
};
 
class F{
   void display(Chai &it){
    cout<<it.ab<<'\n';
   }
};
bool comparing(const Chai &it1,const Chai &it2 ){
   return it1.x   >it2.x;
}
void solve(){

Chai chai1(10,"Chai1");
Chai chai2(20,"Chai2");
if(comparing(chai1,chai2))cout<<"yes\n";
else cout<<"NO\n";
cout<<chai1.getab()<<'\n';

Chai chai3("Chai3");
chai3.detail();
}

int32_t main(){
fastio;
lli tt;cin>>tt;
while(tt--){
solve();
}
}