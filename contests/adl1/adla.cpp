#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  vector<int> d1(200000);
  vector<int> d2(200000);
  vector<int> cnt(200000);
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> d1.at(i) >> d2.at(i);
  }

  for (int i = 0; i < n; i++) {
    cnt.at(i) = 0;
    for (int j = 0; j < n; j++) {
    if (d1.at(i)> d1.at(j) && d2.at(i) > d2.at(j)) {
    	cnt.at(i)++;
    }else if(d1.at(i) < d1.at(j) && d2.at(i) < d2.at(j)) {
      cnt.at(i)++;
    }
   }
  cout << cnt.at(i) + 1 << endl;
  }
}