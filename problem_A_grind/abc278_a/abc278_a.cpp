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
    while(n--){
        string s;
        cin >> s;
        if(s == "For")count++;
        else count--;
    }
    if(count >0) cout << "Yes" << endl;
    else cout << "No" << endl;

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