#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string a,b; cin >> a >> b;
    int c = 0; 
    for(int i = 0 ; i < a.length() ; i++){
        if(a[i]==b[a.length()-1-i]) c++;
    }
    if(c==a.length()) cout << "YES" << '\n';
    else cout << "NO" << '\n';  
}
