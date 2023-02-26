#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum(0);
    for (int i = 0; i < 5; i++) {
        cin >> n;
        sum += pow(n, 2);
    }
    cout << sum % 10;
}
