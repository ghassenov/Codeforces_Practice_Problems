#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define boost()                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void solve() {
    int n; cin >> n;
    int count=1,i=0;
    while(count <= n){
        i++;
        count = i*i;
        if(count==n) {
            i--;
            break;
        }else if(count>n){
            i--;
            break;
        }
    }
    count = i*i;
    int x=1,y=i+1;
    for(int j=count+1; j<=(i+1)*(i+1); j++){
        if(j==n){
            cout << x << " " << y << "\n";
            break;
        }else{
            if(x>=i+1) y--;
            if(x<i+1) x++;
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