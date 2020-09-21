#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  cout << max(abs(A-B),max(abs(B-C),abs(C-A))) << endl;
}
