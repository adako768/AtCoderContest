#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
    vector <vector <string>> v(N, vector<string>(N,"-"));
  for (int i=0; i<A.size(); i++){
    v[A.at(i)-1][B.at(i)-1] = "o";
    v[B.at(i)-1][A.at(i)-1] = "x";
  }
  for (int i=0; i<v.size(); i++){
      for (int j=0; j<v[i].size(); j++){
          cout << v[i][j];
          if (j!=v[i].size()-1) cout <<" ";
          else cout << endl;

      }
  }
  return 0;
}
