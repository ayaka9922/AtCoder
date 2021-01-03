#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  set<string> st, tt;
  vector<string> b(1000000);
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s[0] != '!') {
      st.insert(s);
    } else {
      string a;
      for (int i = 1; i < s.length(); i++) {
        a.push_back(s[i]);
      }
      b[cnt] = a;
      cnt++;
    }
  }
  for (int i = 0; i < b.size(); i++) {
    decltype(st)::iterator it = st.find(b[i]);
    if (it != st.end()) {  // 見つかった
      cout << *it << endl;
      return 0;
    }
  }
  cout << "satisfiable";
  return 0;
}