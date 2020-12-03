#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }
  int mx = 0;
  for (auto p : mp) mx = max(mx, p.second);  // secondはmapの値
  for (auto p : mp) {
    if (p.second != mx) continue;
    cout << p.first << endl;  // firstはmapのkey
  }
  return 0;
}
