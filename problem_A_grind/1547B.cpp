#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void solve() {
    string s;
    cin >> s;
    ll n = s.size();
    ll pos =-1;
    for(ll i=0;i<n;i++){
        if(s[i] == 'a'){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        cout << "NO" << endl;
        return;
    }
    ll l = pos-1;
    ll r = pos+1;
    for(ll i=1;i<n;i++){
        if(l>=0 && s[l] == char(i+'a')) l--;
        else if(r<n && s[r] == char(i+'a')) r++;
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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