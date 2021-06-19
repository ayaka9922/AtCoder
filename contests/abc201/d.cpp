#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (c >= a && c <= b) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}