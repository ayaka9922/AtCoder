#include <bits/stdc++.h>
using namespace std;

int main() {
  int cnt = 0;
  string s;
  cin >> s;

  for (int i = 0; i < 3; i++){
    if (s[i] == 'R')
    cnt++;
  }
  if (s == "RSR")
    cnt = 1;

  cout << cnt << endl;

}
