#include<bits/stdc++.h>
using namespace std;
 
int main(){
  string s; cin >> s;
  sort(s.begin(),s.end());
  vector<char>v;
  for(int i = 0 ; i < s.length() ; i++) if(s[i]!=s[i+1]) v.push_back(s[i]);
  if(v.size()%2==0) cout << "CHAT WITH HER!" << '\n';
  else cout << "IGNORE HIM!" << '\n';
}
