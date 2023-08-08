#include<bits/stdc++.h>
using namespace std;
 
int main(){
  string a , b; cin >> a >> b;
  int count = 0;
  for(int i = 0 ; i < a.length() ; i++){
    if(a[i]>=65 && a[i]<=90) a[i] = a[i]+32;
    if(b[i]>=65 && b[i]<=90) b[i] = b[i]+32;
    if(a[i]==b[i]) count++;
    else break;
  }
  if(count == a.length()) cout << "0" << '\n';
  else {
    if(a[count]>b[count]) cout << "1" << '\n';
    else cout << "-1" << '\n'; 
  }
}
