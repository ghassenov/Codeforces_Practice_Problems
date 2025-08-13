#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void solve() {
    ll a,b,c;
    cin >> a >> b >> c;
    ll n = abs(a-b)*2;
    // n = number of persons in the circle
    if(a>n || b>n || c>n){
        cout << -1 << endl;
        return;
    }
    else{
        if(c>n/2)cout << c - n/2 << endl;
        else cout << c+n/2 << endl;
    }
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