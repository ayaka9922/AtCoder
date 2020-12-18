#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  if (s / 100 > 12 && s % 100 > 12) {
    cout << "NA" << endl;
  } else if (s / 100 > 0 && s / 100 <= 12 && s % 100 > 12) {
  }
  return 0;
}