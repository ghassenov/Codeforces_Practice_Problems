#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void solve() {
    string keyboard,s;
    cin>> keyboard>>s;
    ll n = keyboard.size();
    map<char,ll> mp;
    for(ll i=0;i<n;i++){
        mp[keyboard[i]] = i+1;
    }
    ll n1 = s.size();
    ll count = 0;
    for(ll i=0; i<n1-1;i++){
        count += abs(mp[s[i]] - mp[s[i+1]]);
    }
    cout << count << endl;
 
}

int main() {
  boost();

  ll t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}