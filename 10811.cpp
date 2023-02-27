#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[101], n, m, i, j;
    cin >> n >> m;
    for (int i = 1; i < n + 1; i++) {
        arr[i] = i;
    }
    while (m--) {
        cin >> i >> j;
        for (int t = 0; t < (j - i) / 2 + 1; t++) {
            swap(arr[t + i], arr[j - t]);
        }
    }
    for (int i = 1; i < n + 1; i++) {
        cout << arr[i] << " "; 
    }
}
