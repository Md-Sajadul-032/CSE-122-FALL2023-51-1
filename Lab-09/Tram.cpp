#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    int sum = 0;
    vector<int>v;
    for(int i = 0 ; i < t ; i++){
        int x , y; cin >> x >> y;
        sum = sum-x+y;
        v.push_back(sum);
    }
    sort(v.begin(),v.end());
    cout << v[v.size()-1];
}
