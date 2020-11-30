#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int h, n, sum = 0;
  cin >> h >> n;
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    sum += a;
  }

  if (sum >= h)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
