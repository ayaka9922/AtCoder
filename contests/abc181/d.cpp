#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;

  //一桁のとき
  if (s.length() == 1) {
    if (s[0] != '8') {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
    return 0;
  }

  //二桁のとき
  if (s.length() == 2) {
    int num = stoi(s);  //数字に変換
    if (num % 8 == 0) {
      cout << "Yes" << endl;
    } else {
      reverse(s.begin(), s.end());
      num = stoi(s);
      if (num % 8 == 0) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
    return 0;
  }

  sort(s.begin(), s.end());  // 123345678999 stringのまま
  int cnt[10] = {0};         // 0,0,0,0,0,0,0,0,0,0 int
  for (int i = 0; i < (int)s.length(); i++) {
    int num = s[i] - '0';  // intに変換
    cnt[num]++;            //それぞれ何個あるか
    // cout << num << cnt[num] << endl;
  }
  cnt[0] = 0;
  for (int i = 104; i < 1000; i += 8) {
    int a, b, c;
    int num = i;
    int temp[10] = {0};
    a = num % 10;  //一の位
    num /= 10;
    b = num % 10;  //十の位
    num /= 10;
    c = num % 10;  //百の位
    num /= 10;
    temp[a]++;
    temp[b]++;
    temp[c]++;
    if (cnt[a] - temp[a] >= 0 && cnt[b] - temp[b] >= 0 &&
        cnt[c] - temp[c] >= 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}