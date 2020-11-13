#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;
  ll ans = n % k;
  ans = min(ans, k - n % k);
  cout << ans << endl;
  return 0;
}