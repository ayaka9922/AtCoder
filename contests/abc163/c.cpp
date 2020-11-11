#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), cnt(n);
  for (int i = 1; i < n; i++){
    cin >> a[i];
    cnt[a[i]-1]++;
  }
  for (int i = 0; i < n; i++){
    cout << cnt[i] << endl;
  }
  return 0;
}