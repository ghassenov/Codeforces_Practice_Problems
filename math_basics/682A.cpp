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
    ll nrr[5] = {0};
    ll mrr[5] = {0};
    for(ll i=1;i<=n;i++){
        nrr[i%5]++;
    }
    for(ll i=1;i<=m;i++){
        mrr[i%5]++;
    }
    // Now we look at the pairs
    ll count = 0;
    for(ll i=0;i<5;i++){
        if(i==0){
            count += nrr[i]*mrr[i];
        }
        else{
            count+= nrr[i]*mrr[5-i];
        }
    }
    cout << count << endl;
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