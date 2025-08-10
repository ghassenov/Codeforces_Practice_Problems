#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);


void solve() {
    ll n,m;
    cin >> n >> m;
    vector<string> v;
    unordered_set<string> st;
    for(ll i=0;i<n;i++){
        string s;
        cin>> s;
        v.push_back(s);
    }
    for(ll i=0;i<m;i++){
        string s;
        cin >> s;
        st.insert(s);
    }
    ll ans = 0;
    for(ll i=0;i<n;i++){
        string s = v[i].substr(3);
        if(st.count(s)) ans++;
    }
    cout << ans << endl;


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