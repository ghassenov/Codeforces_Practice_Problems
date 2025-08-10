#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);


void solve() {
    ll n,x;
    cin >> n >> x;
    ll i = 1;
    while(n--){
        ll a;
        cin>>a;
        if(a == x) cout << i;
        else i++;
    }

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