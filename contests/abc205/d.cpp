#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int ans = 0;
  int mx = 0;
  for (int i = 0; i < 3; i++) {
    int a;
    cin >> a;
    ans += a;
    mx = max(mx, a);
  }
  int k;
  cin >> k;
  ans -= mx;
  for (int i = 0; i < k; i++) {
    mx *= 2;
  }
  ans += mx;
  cout << ans << endl;
}