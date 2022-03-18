#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> s(n);
    int tom = 0;
    for (int i = 0; i < n; i++) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        s[i] = {w + x + y + z, i + 1};
        
        if (i == 0) {
            tom = w + x + y + z;
        }
  }
    sort(s.rbegin(), s.rend());
    for (int i = 0; i < n; i++) {
        if (s[i].first == tom) {
            cout << i + 1 << endl;
            break;
    }
  }
  return 0;
}