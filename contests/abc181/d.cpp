#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  istringstream s1;
  cin >> s;

  int num;
  s1 = istringstream(s);
  s1 >> num;

  if (num % 8 == 0) {
    cout <<  "Yes" << endl;
    return 0;
  }

  cout <<  "No" << endl;
  return 0;
}