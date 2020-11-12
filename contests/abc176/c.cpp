#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll cnt = 0;
  for (int i = 0; i < n-1; i++) {
    if(a[i+1]<a[i]){
      cnt += a[i]-a[i+1];
      a[i+1] = a[i];
    }
  }
  cout << cnt << endl;
  return 0;
}