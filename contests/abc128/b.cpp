#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<tuple<string, int, int>> a;
  for (int i = 1; i <= n; i++) {
    string s;
    int p;
    cin >> s >> p;
    p *= -1;
    a.push_back(tie(s, p, i));
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    cout << get<2>(a[i]) << endl;
  }
  return 0;
}