//pasted answer.
#include <bits/stdc++.h>
using namespace std;
string q; // 1e7
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        map <char, int> freq;
        for(auto i: s) freq[i]++;
        // for(auto i: m) cout<<i.first<<" "<<i.second<<endl;
        set <pair<int, char>> ordering_freq;
        for(auto i: freq) ordering_freq.insert({i.second, i.first});
        // {1, d}, {2, b}, {2, c};
        char mnfreq = (ordering_freq.begin())->second;
        char mxfreq = (--ordering_freq.end())->second;
        for(auto &i: s){
            if(i == mnfreq){ 
              i = mxfreq;
               break;
            }
        }
        cout<<s<<endl;
    }
   
}

