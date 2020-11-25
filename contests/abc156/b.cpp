#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;
  ll keta = 1;
  while (n >= k) {
    n = n / k;
    keta++;
  }
  cout << keta << endl;
  return 0;
}
