#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long N;
    cin >> N;
    unsigned long long sum_all = N*(N+1)/2;
    unsigned long long max_3 = N/3;
    unsigned long long max_5 = N/5;
    unsigned long long max_15 = N/15;
    unsigned long long sum_3 = 3 * max_3 * (max_3 +1)/2;
    unsigned long long sum_5 = 5 * max_5 * (max_5 +1)/2;
    unsigned long long sum_15 = 15 * max_15 * (max_15 +1)/2;
    
    cout << sum_all - sum_3 - sum_5 + sum_15 << endl;
    return 0;
}