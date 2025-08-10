#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);


void solve() {
    ll n,d;
    cin >> n>> d;
    vector<ll> v(n,0);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    for(ll i=0;i<n-1;i++){
        if(v[i+1]-v[i] <= d){
            cout << v[i+1] << endl;
            return;
        }
    }
    cout << -1 << endl;
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