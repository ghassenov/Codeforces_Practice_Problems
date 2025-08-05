#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

bool prime(int x){
    for(int i=2;i*i<=x;i++ ){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
void solve() {
    ll n;
    cin>> n;
    for(ll i=1;i<=1000;i++){
        if(!prime(n*i +1)){
            cout << i << endl;
            break;
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