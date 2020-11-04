#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, k, d;
  cin >> n >> k;

  vector<int> b(n, 0);
  vector<vector<int>> a(k, vector<int>(n));

  for (int i = 0; i < k; i++) {
    cin >> d;
    for (int j = 0; j < d; j++) {
      cin >> a[i][j];
      b[a[i][j]-1] = 1;
    }
  }

  int cnt = 0;

  for (int i = 0; i < n; i++) {
    if(b[i]==0) cnt++;
  }
  
  cout << cnt << endl;
  return 0;
}