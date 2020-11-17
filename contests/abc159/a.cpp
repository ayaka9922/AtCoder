#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  int ans=0;
  ans = (n * n - n + m * m - m) / 2;
  cout << ans << endl;

  return 0;
}