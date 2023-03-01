#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = a; i < b; i++)
using namespace std;

int a[101][101], b[101][101], n, m;
int main() {
    cin >> n >> m;
    FOR(i, 0, n) FOR(j, 0, m) cin >> a[i][j];
    FOR(i, 0, n) FOR(j, 0, m) cin >> b[i][j];
    FOR(i, 0, n) {
        FOR(j, 0, m) cout << a[i][j] + b[i][j] << " ";
        cout << "\n";
    }
}
