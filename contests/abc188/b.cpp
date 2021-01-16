#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans += (ll)a[i] * b[i];
  }
  if (ans == 0)
    cout << "Yes";
  else
    cout << "No";
  return 0;
}