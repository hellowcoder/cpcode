//Author: Sandeep Kumar
//Admission No. 24JE0686

#include <bits/stdc++.h>
#define fr(i,a,b) for(lli i=a;i<=b;i++)
#define all(v) v.begin(),v.end()

using namespace std;

struct node{
    int val;
    node* next;
    node(int x):val(x),next(nullptr){}
};

struct tree{
    int val;
    tree* left;
    tree* right;
    tree(int x):val(x),left(nullptr),right(nullptr){}
};
 
void printList(node* head) {
    while(head){
        cout<<head->val<< " ";
        head = head->next;
    }
    cout<<"\n";
}
void solve(){

}

int32_t main(){
solve();
}