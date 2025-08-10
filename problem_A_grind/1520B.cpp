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
    ll count = 0;
    for(ll i=1;i<=n ;i=i*10+1){
        for(ll d=1;d<=9;d++){
            if(i*d <=n) count++;
        }
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