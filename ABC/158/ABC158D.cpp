#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s;
    int Q;
    cin >> s >> Q;
    vector <string> str(2);
    str[1] = s;
    int rev = 0;
    for (int i=0; i<Q; i++) {
        int T,F;
        string C;
        cin >> T;
        rev = (rev + T)%2;
        if (T==2) {
            cin >> F >> C ;
            str[(F-1 + rev)%2] = str[(F-1 + rev)%2] + C;
        }
    }
    reverse(str[rev].begin(),  str[rev].end()); 
    cout << str[rev] << str[(rev+1)%2] << endl;
    return 0;
}