#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

vector<int> factorize(int n){
    vector<int> factors;
    for(int i=2;i*i <=n;i++){
        while(n%i == 0){
            factors.push_back(i);
            n = n/i;
        }
    }
    if(n>1){
        factors.push_back(n);
    }
    return factors;
}
void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> factors = factorize(n);
    if(factors.size() <k){
        cout << -1 << endl;
    }
    else{
        while(factors.size()>k){
            int last = factors.back();
            factors.pop_back();
            factors.back() *= last;
        }
        for(int i=0;i<k;i++){
            cout << factors[i] << " ";
        }
        cout << endl;
        return;
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