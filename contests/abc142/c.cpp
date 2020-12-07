#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    mp[m] = i;
  }
  for (auto p : mp) {
    cout << p.second + 1 << " ";  // firstはmapのkey
  }
  cout << endl;
  return 0;
}
