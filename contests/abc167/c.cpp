#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  a %= 998244353;
  b %= 998244353;
  c %= 998244353;
  if(a > b) swap(a, b);
  if(a > c) swap(a, c);
  if(b > c) swap(b, c);

  ll ans = 0;
  for (int i = 1; i <= a; i++){
    for (int j = 1; j <= b; j++){
      ans += i * j * (1+c) * c / 2;
      ans %= 998244353;
    }
  }
  ans %= 998244353;

  cout << ans << endl;

  return 0;
}