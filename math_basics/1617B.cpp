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
    ll a,b;
    for(ll i=1;;i++){
        a = i;
        b = n-1 -a;
        if(__gcd(a,b) == 1){
            if(a!=b && b!=1 && a!=1){
                cout << a << " " << b << " " << 1 << endl;
                return;
            }
        }
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