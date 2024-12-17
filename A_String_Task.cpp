#include <bits/stdc++.h>
using namespace std;
bool checkvowel(char c){
    c=tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y';
}
int main(){
string s;
cin>>s;
string s1,s4;
for(int i=0;i<s.size();i++){
   if(checkvowel(s[i])){
    continue;
   }
   else if(isalpha(s[i])){
     s[i]=tolower(s[i]);
    s1.push_back(s[i]);
   }
}
for(int i=0;i<s1.size();i++){
   s4+='.';
   s4+= s1[i];
}
cout<<s4;
}