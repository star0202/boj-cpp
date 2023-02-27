#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll x, n, a, b, sum = 0;
    cin >> x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum += a * b;
    }
    if (sum == x) cout << "Yes";
    else cout << "No";
}
