#include<bits/stdc++.h>
using namespace std;

class chain
{
	private:
		int x;
	public:
	 chain& set(int x){
	  this->x=x;
	  return *this;
       }
        chain& print(){
		cout<<x<<'\n';
		return *this;
	}

};
int main(){
	chain c;
	c.set(10).print().set(20).print();
}
