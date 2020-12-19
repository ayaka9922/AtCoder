#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int s;
  cin >> s;
  int l, r;
  l = s / 100;
  r = s % 100;
  if (l > 0 && l <= 12 && r > 0 && r <= 12) {
    cout << "AMBIGUOUS" << endl;
  } else if (l > 0 && l <= 12) {
    cout << "MMYY" << endl;
  } else if (r > 0 && r <= 12) {
    cout << "YYMM" << endl;
  } else {
    cout << "NA" << endl;
  }
  return 0;
}