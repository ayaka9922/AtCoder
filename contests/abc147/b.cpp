#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.length() / 2; i++) {
    if (s[i] != s[s.length() - i - 1]) ans++;
  }
  cout << ans << endl;
  return 0;
}
