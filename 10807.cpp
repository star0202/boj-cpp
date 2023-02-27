#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, v, cnt = 0;
    cin >> n;
    vector<int> arr;
    while (n--) {
        cin >> x;
        arr.push_back(x);
    }
    cin >> v;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == v) cnt++;
    }
    cout << cnt;
}
