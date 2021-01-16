#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    mp[s]++;
  }
  ll ans = 0;
  for (auto& p : mp) {
    int s = p.second;
    ans += (ll)s * (s - 1) / 2;
  }
  cout << ans << endl;
  return 0;
}