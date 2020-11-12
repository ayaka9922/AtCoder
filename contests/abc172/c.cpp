#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, m, k;
  cin >> n >> m >> k;

  vector<ll> a(n), b(m),suma(n+1,0),sumb(m+1,0);
  for (int i = 0; i < n; i++){
    cin >> a[i];
    suma[i+1] = suma[i] + a[i];
  }
  for (int i = 0; i < m; i++){
    cin >> b[i];
    sumb[i+1] = sumb[i]+b[i];
  }

  int ans = 0,b_cnt = m;

  for(int i = 0; i <= n; i++){
    if (suma[i] > k) {
      break;
    }else{
      for(int j = b_cnt; j >= 0; j--){
        if(suma[i] + sumb[j] <= k){
          ans = max(ans, i+j);
          b_cnt = j;
          break;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;

}