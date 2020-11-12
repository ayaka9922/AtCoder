#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long ans = 0, mod = pow(10, 9) + 7, sum;
  cin >> n;
  vector<int> a(n);
  vector<long long> s(n + 1, 0);

  for (int i = 0; i < n; i++){
    cin >> a.at(i);
    s.at(i + 1) = a.at(i) + s.at(i);
  }

  for (int i = 0; i < n; i++) {
    sum = (s.at(n) - s.at(i + 1)) % mod;
    ans += a.at(i) * sum;
    ans %= mod;
  }

  cout << ans << endl;

}
