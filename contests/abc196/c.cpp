#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  ll tmp = n;
  int cnt = 0;
  while (tmp) {
    tmp /= 10;
    cnt++;
  }
  int ans = 0;
  if (cnt == 1) {
    ans = 0;
  } else if (cnt == 2) {
    if (n / 10 > n % 10)
      ans = n / 10 - 1;
    else
      ans = n / 10;
  } else if (cnt == 3) {
    ans = 9;
  } else if (cnt == 4) {
    int m = 10;
    ans = 9;
    int l = 0;
    while (l <= n) {
      l = 0;
      l = m * 100 + m;
      if (l <= n) ans++;
      m++;
    }
  } else if (cnt == 5) {
    ans = 99;
  } else if (cnt == 6) {
    int m = 100;
    ans = 99;
    int l = 0;
    while (l <= n) {
      l = 0;
      l = m * 1000 + m;
      if (l <= n) ans++;
      m++;
    }
  } else if (cnt == 7) {
    ans = 999;
  } else if (cnt == 8) {
    int m = 1000;
    ans = 999;
    int l = 0;
    while (l <= n) {
      l = 0;
      l = m * 10000 + m;
      if (l <= n) ans++;
      m++;
    }
  } else if (cnt == 9) {
    ans = 9999;
  } else if (cnt == 10) {
    ll m = 10000;
    ans = 9999;
    ll l = 0;
    while (l <= n) {
      l = 0;
      l = m * 100000 + m;
      if (l <= n) ans++;
      m++;
    }
  } else if (cnt == 11) {
    ans = 99999;
  } else if (cnt == 12) {
    ll m = 100000;
    ans = 99999;
    ll l = 0;
    while (l <= n) {
      l = 0;
      l = m * 1000000 + m;
      if (l <= n) ans++;
      m++;
    }
  }
  cout << ans;
  return 0;
}