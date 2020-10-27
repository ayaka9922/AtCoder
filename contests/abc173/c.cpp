#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<vector<int>> c(h, vector<int>(k));

  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
    cin >> c[i][j];
    }
  }

  int ans=0;

  cout << ans << endl;

  return 0;
}