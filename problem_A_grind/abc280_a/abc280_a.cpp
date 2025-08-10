#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);


void solve() {
    ll h,w;
    cin >> h >> w;
    ll count = 0;
    for(ll i=0;i<h;i++){
        for(ll j=0;j<w;j++){
            char x;
            cin >> x;
            if(x == '#')count++;
        }
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