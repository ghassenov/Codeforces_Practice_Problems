#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);


void solve() {
    ll a,b,n;
    cin >> n >> a >> b;
    vector<ll> v(n,0);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    for(ll i=0;i<n;i++){
        if(a+b == v[i]){
            cout << i+1 << endl;
        }
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