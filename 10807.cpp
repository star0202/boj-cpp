#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[201] = {}, n, x, v;
    cin >> n;
    while (n--) {
        cin >> x;
        arr[x + 100]++;
    }
    cin >> v;
    cout << arr[v + 100];
}
