#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;
  int keta = 1;
  while (n != 1) {
    n = n / k;
    keta++;
    cout << n << endl;
  }
  cout << keta << endl;
  return 0;
}
