#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  set<int> st;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    st.insert(a);
  }
  if (st.size() == n)
    cout << "Yes";
  else
    cout << "No";
}