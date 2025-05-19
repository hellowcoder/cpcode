//Author: sandeep172918
//Date: 2025-04-10 17:29
#include <bits/stdc++.h>
#define lli long long int
#define fr(i,n) for(lli i=0;i<(n);i++)
#define frs(i,s,n) for(lli i=s;i<(n);i++)
#define fr1(i,n) for(lli i=1;i<=(n);i++)
#define uint unsigned long long int
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);fr(i,n)cin>>v[i]
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define vin(a) for(auto &i:a) cin>>i
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v) (lli)(v.size())
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<
#define no cout<<
#define ff first
#define ss second
using namespace std;
const int MOD=1e9+7;



struct Node{
    Node* links[26];
    bool flag =false;
    // Node(){
    //     fr(i,26){
    //         links[i]=nullptr;
    //     }
    // }
    bool is_it(char c){
        return links[c-'a'] != NULL;
    }
    void make(char c,Node* node){
        links[c-'a']=node;
    }
    Node* move(char c){
        return links[c-'a'];
    }
    void setend(){
        flag=true;
    }
    bool check(){
        return flag;
    }
};
class Trie {
    private:
    Node* node;
public:
    Trie() {
        node = new Node();
    }
    
    void insert(string word) {
       Node* root=node;
        for(int i=0;i<word.size();i++){
            if(!root->is_it(word[i])){
                root->make(word[i],new Node());
            }
            root=root->move(word[i]);
        }
        root->setend();
    } 
    
    bool search(string word) {
        Node* root=node;
        for(int i=0;i<word.size();i++){
           if(!root->is_it(word[i]))return false;
           root=root->move(word[i]);
        }
        return root->check();
    }
    
    bool startsWith(string word) {
        Node* root=node;
         for(int i=0;i<word.size();i++){
           if(!root->is_it(word[i]))return false;
           root=root->move(word[i]);
        }
       return true;
    }
};
void solve(){
    
}

int32_t main(){
    fastio;
    lli tt;cin>>tt;
    while(tt--){
    solve();
    }
}