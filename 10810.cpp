#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[101] = {}, n, m;
    cin >> n >> m;
    while(m--)
    {
        int i, j, k;
        cin >> i >> j >> k;
        for (int x = i - 1; x < j; x++)
            a[x] = k;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
