#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

vector<ll> sieve(int n){
    int* arr = new int[n+1]();
    vector<ll> vect;
    for(int i=2;i<=n;i++){
        if(arr[i] == 0){
            vect.push_back(i);
            for(int j=2*i; j<=n;j+=i){
                arr[j] = 1;
            }
        }
    }
    return vect;
}

bool isPrime(ll x){
    for(ll i=2 ;i*i <=x;i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
void solve() {
    ll n,k;
    vector<ll>prime = sieve(1001);
    cin >> n >> k;
    vector<ll>valid;
    for(ll i=1;i<prime.size();i++){
        ll sum = prime[i] + prime[i-1] +1;
        if(isPrime(sum)){
            valid.push_back(sum);
        }
    }
    ll count = 0;
    for(ll i=0;i<valid.size();i++){
        if(valid[i] <= n){
            count++;
        }
    }
    if(count >= k) cout << "YES"<<endl;
    else cout << "NO" <<endl;
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