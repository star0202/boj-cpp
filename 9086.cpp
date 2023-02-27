#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        cout << a[0] << a[a.length() - 1] << "\n";
    }
}
