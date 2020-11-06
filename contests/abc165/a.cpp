#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int k, a, b;
  cin >> k >> a >> b;
  int i = 1, cnt = 0;
  while (cnt<= b){
    cnt = k * i;
    if (cnt >= a && cnt <= b) {
      cout << "OK" << endl;
      return 0;
    }
    i++;
  }
  cout << "NG" << endl;
  return 0;
}