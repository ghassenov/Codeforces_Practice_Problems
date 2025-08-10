#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void solve() {
    ll n;
    cin >> n;
    if(n%3 == 0) cout << n/3 << " " << n/3 << endl;
    else if(n%3 == 1) cout << n/3 +1 << " "<< n/3 << endl;
    else cout << n/3 << " " << n/3 +1 << endl;

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