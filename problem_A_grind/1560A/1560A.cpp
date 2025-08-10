#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

vector<ll> v(ll n){
    vector<ll> arr;
    ll i=1;
    while(arr.size() <n){
        if(i%3 !=0 && i%10 !=3) arr.push_back(i);
        i++;
    }
    return arr;
}
void solve() {
    vector<ll> arr = v(1001);
    ll k;
    cin>>k;
    cout << arr[k-1] << endl;
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