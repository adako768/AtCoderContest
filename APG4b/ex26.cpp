#include <bits/stdc++.h>
using namespace std;
const char zero = '0';

int cal_int (map<char,int> &var_int){
    char c, op='=';
    int var, ans=0;
    while (cin >> c) {
        if (c == ';') break;
        if (c == '+' || c == '-' || c == '=') {
            op = c;
        } else {
            if (isdigit(c)) var = (int)(c - zero);
            else var = var_int[c];

            if (op == '=') ans  = var;
            if (op == '+') ans += var;
            if (op == '-') ans -= var;
        }
    }
    return ans;
}

vector<int> get_vec(map<char,int> &var_int) {
    vector<int> ans;
    char c;
    while (cin >> c) {
        // cout << "c is " << c << endl;
        if (c == ']') break;
        if (c == ',') continue;
        if (isdigit(c)) ans.push_back((int)(c - zero)); 
        else ans.push_back(var_int[c]);
        // cout << "ans.size is " << ans.size() << endl;
    }
    return ans;
}

vector<int> cal_vec(map<char,int> &var_int, map<char,vector<int>> &var_vec){
    char c, op='=';
    vector<int> vec, ans;
    while (cin >> c) {
        // cout << "c is " << c << endl;
        if (c == ';') break;
        if (c == '+' || c == '-' || c == '=') op = c;
        else {
            if (c == '[') vec = get_vec(var_int);
            else vec = var_vec[c];

            if (op == '=') ans = vec;
            if (op == '+') {
                for (int i=0; i<ans.size(); i++) ans[i] += vec[i];
            }
            if (op == '-') {
                for (int i=0; i<ans.size(); i++) ans[i] -= vec[i];
            }
        }
    }
    return ans;
}

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

int main() {
    int n;
    cin >> n;
    map<char,int> var_int;
    map<char,vector<int>> var_vec;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        if (s == "int") {
            char var_name;
            cin >> var_name;
            var_int[var_name] = cal_int(var_int);

        }
        if (s == "print_int") {
            cout << cal_int(var_int) << endl;
        }
        
        if (s == "vec") {
            char var_name;
            cin >> var_name;
            var_vec[var_name] = cal_vec(var_int, var_vec);
        }
        
        if (s == "print_vec") {
            print_vec(cal_vec(var_int, var_vec));
        }
    }
}