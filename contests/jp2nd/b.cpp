#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  set<int> ast, bst, ans;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    ast.insert(a[i]);
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
    bst.insert(b[i]);
  }
  for (int i = 0; i < m; i++) {
    int s = ast.size();
    ast.insert(b[i]);
    if (ast.size() != s) ans.insert(b[i]);
  }
  for (int i = 0; i < n; i++) {
    int s = bst.size();
    bst.insert(a[i]);
    if (bst.size() != s) ans.insert(a[i]);
  }
  for (auto itr = ans.begin(); itr != ans.end(); ++itr) {
    cout << *itr << ' ';
  }
  return 0;
}