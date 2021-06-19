#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  for (int i; i < s.length() - 2; i++) {
    if (s[i] == 'Z' && s[i + 1] == 'O' && s[i + 2] == 'N' && s[i + 3] == 'e') {
      ans++;
    }
  }
  cout << ans;
  return 0;
}