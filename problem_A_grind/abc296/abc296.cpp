#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);


void solve() {
    ll n;
    string s;
    cin >> n >> s;
    for(ll i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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