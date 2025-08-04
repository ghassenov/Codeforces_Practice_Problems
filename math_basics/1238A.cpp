#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void solve() {
    ll x,y;
    cin >> x >> y;
    ll diff = x-y;
    if(diff == 1){
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" <<endl;
        return;
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