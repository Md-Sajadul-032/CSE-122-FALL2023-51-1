#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n ; cin >> n;
  string s; cin >> s;
  int c = 0 , b = 0;
  for(int i = 0 ; i < s.length() ; i++){
    if(s[i]=='A') c++;
    else b++;
  }
  if(c>b) cout << "Anton"<<'\n';
  else if(b>c) cout << "Danik"<<'\n';
  else cout << "Friendship"<< '\n';
}
