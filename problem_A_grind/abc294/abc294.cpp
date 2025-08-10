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
    cout << h << w << endl;
    char t[h][w];
    for(ll i=0 ;i<h ; i++){
        for(ll j=0 ;j<w ;j++ ){
            ll x=0;
            cin >> x;
            if(x == 0) t[i][j] = '.';
            else t[i][j] = char(64+x);
        }
    }
    for(ll i=0 ;i<h ; i++){
        for(ll j=0 ;j<w ;j++ ){
            cout << t[i][j] << " ";
            if(j == w-1) cout << endl;
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