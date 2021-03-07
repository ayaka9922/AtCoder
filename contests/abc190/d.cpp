#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll cnt = 0;
  n = n * 2;
  for (ll i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (i % 2 == 1 || n / i % 2 == 1) cnt++;
      // cout << i << endl;
    }
  }
  cout << cnt * 2 << endl;
  return 0;
}