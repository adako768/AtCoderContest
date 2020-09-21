#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  int ans = x + 1;
  cout << ans << endl;
  ans *= (a + b);
  cout << ans << endl;
  ans *= ans ;
  cout << ans << endl;
  ans --;
  cout << ans << endl;
}
