#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  set<ll> s;

  for (ll i = 1; i * i <= n; i++) {
    if (n % i != 0){
      continue;
    }
    s.insert(i);
    s.insert(n/i);
  }

  for (ll i : s){
    cout << i << endl;
  }

}