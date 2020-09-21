#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, price, N;
  cin >> p;
  
  // パターン2
  if (p == 2) {
    string text;
    cin >> text;
    cout << text << "!" << endl;
  }

  cin >> price >> N;

  cout << price * N << endl;
}
