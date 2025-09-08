#include <bits/stdc++.h>
using namespace std;
#define lli long long int

class game{
 public:
  virtual void name()=0;
  virtual int player()=0;
  virtual int rating()=0;

  void details(){
    name();
    cout<<"Number of player == "<<player()<<'\n';
    cout<<"rating == "<<rating()<<'\n';
  }
};

class bgmi:public game{
  public:
   void name()override{
     cout<<"this is bgmi\n";
   }
   int player()override{
     return 1e6;
   }
   int rating() override {
     return 10;
   }  
};

class free_fire:public game{
  public:
   void name()override{
     cout<<"this is waste of time\n";
   }
   int player()override{
     return 100;
   }
   int rating() override {
     return 1;
   }
};

int main(){
bgmi pubg;
pubg.details();
free_fire kooda;
kooda.details();

}