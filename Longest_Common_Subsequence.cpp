// //Author: sandeep172918
// //Date: 2025-07-27 19:57

// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #define lli long long int
// #define fr(i,n) for(lli i=0;i<n;i++)
// #define frs(i,a,b) for(lli i=a;i<=b;i++)
// #define rfr(i,b,a) for(lli i=b;i>=a;i--)
// #define srt(v) sort(v.begin(),v.end())
// #define rsrt(v) sort(v.rbegin(),v.rend())
// #define vec(v,n,k) vector<lli>v(n,k)
// #define vect(v) vector<lli>v
// #define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y,0));
// #define pr pair<lli,lli>
// #define take(x) lli x;cin>>x
// #define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
// #define out(v) frs(i,0,v.size()-1)cout<<v[i]<<' ',nl
// #define mxe(v)  *max_element(v.begin(),v.end())
// #define mne(v)  *min_element(v.begin(),v.end())
// #define psb(a) push_back(a)
// #define ppb pop_back()
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// #define sq(x) sqrtl(x)
// #define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
// #define yes cout<<"YES\n"
// #define no cout<<"NO\n"
// #define no1 cout<<"-1\n"
// #define nl cout<<"\n"
// #define ff first
// #define ss second
// #define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
// using namespace std;
// const int MOD=1e9+7;
// using namespace __gnu_pbds;
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// //max(a,b)=(a+b+abs(a-b))/2
// //binary search lagale bete
// vector<vector<lli>>dp;
// vector<vector<lli>>dpr;
// lli n,m;
// vector<lli>a,b;
// map<pr,set<vector<lli>>>memo;


// lli lcs_iter(){ //iterative approach
// frs(i,1,n){
//    frs(j,1,m){
//       if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
//       else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//    }
// }
// return dp[n][m];
// }

// lli lcs_rec(lli i,lli j){ //recurssive approach
//          if(i==0 || j==0)return 0;
//          if(dpr[i][j] != -1)return dpr[i][j];
//          if(a[i-1]==b[j-1]){
           
//             return dpr[i][j]=lcs_rec(i-1,j-1)+1;
//          }
//          return dpr[i][j]=max(lcs_rec(i-1,j),lcs_rec(i,j-1));
// }

// vector<lli> print_one(){
//   vector<lli>ans;
//   lli i=n,j=m;
//   while(i>0 && j>0){
//    if(a[i-1]==b[j-1]){
//       i--;j--;
//       ans.psb(a[i]);
//    }else if(dp[i-1][j]>dp[i][j-1])i--;
//    else j--;
//  }
// return ans;
// }

// set<vector<lli>> print_all(lli i,lli j){
//    if(i==0 || j==0){
//       return {{}};
//    }
//    if(memo.count({i,j}))return memo[{i,j}];
    
//    set<vector<lli>>result;
//    if(a[i-1]==b[j-1]){
//      auto temp=print_all(i-1,j-1);
//      for(auto it:temp){
//       it.push_back(a[i-1]);
//       result.insert(it);
//      }
//    }else{
//       if(dp[i-1][j]>=dp[i][j-1]){
//         auto top=print_all(i-1,j);
//         result.insert(all(top));
//       }
//       if(dp[i][j-1]>=dp[i-1][j]){
//          auto left=print_all(i,j-1);
//          result.insert(all(left));
//       }
//    }
//    return memo[{i,j}]=result;
// }





// void solve(){
// cin>>n>>m;
// dp=vector<vector<lli>>(n+1,vector<lli>(m+1,0));
// dpr=vector<vector<lli>>(n+1,vector<lli>(m+1,-1));
// a=vector<lli>(n);
// b=vector<lli>(m);
// fr(i,n)cin>>a[i];
// fr(i,m)cin>>b[i];

// //print len by iterative
// cout<<"len\n";
// cout<<lcs_iter()<<'\n';

// //print len by recurssive
// cout<<"\nlen\n";

// cout<<lcs_rec(n,m)<<'\n';

// //print one possible lcs

// vector<lli>ans=print_one();
// cout<<"\none\n";
// if(ans.size())reverse(all(ans));
// fr(i,ans.size())cout<<ans[i]<<' ';
// cout<<'\n';


// //printing all possible lcs

// set<vector<lli>> st =print_all(n,m);
// cout<<"\nall\n";
// for(auto &it:st){
//    fr(i,it.size()){
//       cout<<it[i]<<' ';

//    }
//    cout<<'\n';
// }

// }

// int32_t main(){
// fastio;
// solve();
// }

//Author: sandeep172918
//Date: 2025-07-27 19:57

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define fr(i,n) for(lli i=0;i<n;i++)
#define frs(i,a,b) for(lli i=a;i<=b;i++)
#define rfr(i,b,a) for(lli i=b;i>=a;i--)
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define vec(v,n,k) vector<lli>v(n,k)
#define vect(v) vector<lli>v
#define vec2(v,x,y) vector<vector<lli>>v(x,vector<lli>(y,0));
#define pr pair<lli,lli>
#define take(x) lli x;cin>>x
#define get(v,n) vec(v,n,0);frs(i,0,n-1)cin>>v[i]
#define out(v) frs(i,0,v.size()-1)cout<<v[i]<<' ',nl
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sq(x) sqrtl(x)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no1 cout<<"-1\n"
#define nl cout<<"\n"
#define ff first
#define ss second
#define srtp(v) sort(all(v),[](const pr& a,const pr& b){if(a.ff== b.ff)return a.ss>b.ss; return a.ff<b.ff;});
using namespace std;
const int MOD=1e9+7;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//max(a,b)=(a+b+abs(a-b))/2
//binary search lagale bete
vector<vector<lli>>dp;
vector<vector<lli>>dpr;
lli n,m;
vector<char>a,b;
map<pr,set<vector<char>>>memo;


lli lcs_iter(){ //iterative approach
frs(i,1,n){
   frs(j,1,m){
      if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
      else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
   }
}
return dp[n][m];
}

lli lcs_rec(lli i,lli j){ //recurssive approach
         if(i==0 || j==0)return 0;
         if(dpr[i][j] != -1)return dpr[i][j];
         if(a[i-1]==b[j-1]){
           
            return dpr[i][j]=lcs_rec(i-1,j-1)+1;
         }
         return dpr[i][j]=max(lcs_rec(i-1,j),lcs_rec(i,j-1));
}

vector<char> print_one(){
  vector<char>ans;
  lli i=n,j=m;
  while(i>0 && j>0){
   if(a[i-1]==b[j-1]){
      i--;j--;
      ans.psb(a[i]);
   }else if(dp[i-1][j]>dp[i][j-1])i--;
   else j--;
 }
return ans;
}

set<vector<char>> print_all(lli i,lli j){
   if(i==0 || j==0){
      return {{}};
   }
   if(memo.count({i,j}))return memo[{i,j}];
    
   set<vector<char>>result;
   if(a[i-1]==b[j-1]){
     auto temp=print_all(i-1,j-1);
     for(auto it:temp){
      it.push_back(a[i-1]);
      result.insert(it);
     }
   }else{
      if(dp[i-1][j]>=dp[i][j-1]){
        auto top=print_all(i-1,j);
        result.insert(all(top));
      }
      if(dp[i][j-1]>=dp[i-1][j]){
         auto left=print_all(i,j-1);
         result.insert(all(left));
      }
   }
   return memo[{i,j}]=result;
}





void solve(){
cin>>n>>m;
dp=vector<vector<lli>>(n+1,vector<lli>(m+1,0));
dpr=vector<vector<lli>>(n+1,vector<lli>(m+1,-1));
a=vector<char>(n);
b=vector<char>(m);
fr(i,n)cin>>a[i];
fr(i,m)cin>>b[i];

//print len by iterative
cout<<"len\n";
cout<<lcs_iter()<<'\n';

//print len by recurssive
cout<<"\nlen\n";

cout<<lcs_rec(n,m)<<'\n';

//print one possible lcs

vector<char>ans=print_one();
cout<<"\none\n";
if(ans.size())reverse(all(ans));
fr(i,ans.size())cout<<ans[i]<<' ';
cout<<'\n';


//printing all possible lcs

set<vector<char>> st =print_all(n,m);
cout<<"\nall\n";
for(auto &it:st){
   fr(i,it.size()){
      cout<<it[i]<<' ';

   }
   cout<<'\n';
}

}

int32_t main(){
fastio;
solve();
}