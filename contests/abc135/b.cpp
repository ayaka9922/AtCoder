#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> p(n), s(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    s[i] = i + 1;
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (p[i] != s[i]) {
      cnt++;
    }
  }
  if (cnt <= 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}