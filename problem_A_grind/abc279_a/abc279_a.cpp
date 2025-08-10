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
    ll count = 0;
    ll n = s.size();
    for(ll i=0;i<n;i++){
        if(s[i] == 'v') count++;
        else count +=2;
    }
    cout << count << endl;


}

int main() {
  boost();

  ll t = 1;
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}