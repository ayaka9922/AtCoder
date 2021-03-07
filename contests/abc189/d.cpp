#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int ans = 1;
  for (int i = 0; i < n; i++) {
    ans *= 2;
  }
  int k = ans;

  vector y(n);
  y[0] = 1;
  for (int j = 0; j < n; j++) {
    if (s[j] == "AND") y[j] = min(y, 1);
    if (s[j] == "OR") y[j] = max(y, 1);
  }
  cout << ans << endl;
  return 0;
}