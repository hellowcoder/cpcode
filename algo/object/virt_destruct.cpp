#include <bits/stdc++.h>
using namespace std;
#define lli long long int

class human{
  public:
   human(){
    cout<<"const\n";
   }
   virtual ~human(){
    cout<<"human::~human\n";
   }
};

class student: public human{
  public:
   student(){
    cout<<"student const\n";
   }
   ~student(){
    cout<<"human::~student\n";
   }
};

int main(){
human *h = new student;
delete h;
}