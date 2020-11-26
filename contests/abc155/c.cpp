#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  set<string> sx(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    sx.insert(s[i]);
  }

  cout << r << endl;
  return 0;
}
