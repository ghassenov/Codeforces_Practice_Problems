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
    ll k=0;
    if(n%2 == 0){
        k = n/2;
        cout << k << endl;
        while(k--){
            cout << 2 << " ";
        }
        return;
    }
    else{
        k++;
        k+=(n-3)/2;
        cout << k << endl;
        cout << 3 << " ";
        k--;
        while(k--){
            cout << 2 << " ";
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