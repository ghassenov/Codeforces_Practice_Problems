#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void solve() {
    ll n,k;
    cin >> n >> k;
    ll n_places=0;
    if(n%2 == 0) n_places = n/2;
    else n_places = n/2 + 1;
    if(k > n_places){
        cout << -1 << endl;
        return;
    }
    else{
        ll a =1;
        //construct the grid
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(i == j){
                    if(a == 1 && k!=0){
                        if(j == n-1){
                            cout << 'R' << endl;
                        } 
                        else cout << 'R';
                    a = -a;
                    k--;
                    }
                    else{               
                        if(j == n-1){
                            cout << '.' << endl;
                        } 
                        else cout << '.';
                    a = -a;
                    }
                }
                else{
                    if(j == n-1){
                        cout << '.' << endl;
                    } 
                    else cout << '.';
                }
            }
        }
    }
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