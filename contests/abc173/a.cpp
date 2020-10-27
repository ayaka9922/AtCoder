#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  if(n % 1000 != 0) ans = 1000 - (n % 1000);
  cout << ans << endl;
  return 0;

}