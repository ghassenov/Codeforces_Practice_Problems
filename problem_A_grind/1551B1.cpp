#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void solve() {
    string s;
    cin >> s;
    map<char,ll> mp;
    ll n = s.size();
    for(ll i=0;i<n;i++){
        mp[s[i]]++;
    }
    ll count =0;
    ll freq_1 = 0;
    for(auto x:mp){
        if(x.second >= 2){
            count++;
        }
        else{
            freq_1++;
        }
    }
    count += freq_1/2;
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