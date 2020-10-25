#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll x, y, a, b;
  cin >> x >> y >> a >> b;

  ll ans = 0;

  while(1){
    if(x > y/a) break; //オーバーフローしないためにy/a(切り捨て)
    if(a*x >= y) break; //等号
    if(x*a > x+b) break;

    x *= a;
    ++ans;
  }

  ans += (y-x-1)/b; //=yにならないための-1
  cout << ans << endl;

  return 0;
}