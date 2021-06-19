#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(string n) {
  int l = n.length();
  int a = 1;
  if (n != string(n.rbegin(), n.rend())) {
    a = 0;
  }
  return a;
}

int main() {
  string n;
  cin >> n;
  for (int i = 0; i < 10; i++) {
    int a = solve(n);
    if (a == 1) {
      cout << "Yes";
      return 0;
    } else {
      n = "0" + n;
    }
  }
  cout << "No";
  return 0;
}