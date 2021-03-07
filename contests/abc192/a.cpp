#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int x;
  cin >> x;
  int cnt = (x + 100) / 100;
  cout << cnt * 100 - x;
  return 0;
}