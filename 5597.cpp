#include <bits/stdc++.h>
using namespace std;

int main() {
    bool student[31] = {0, };
    int n, i=28;
    while (i--) {
        cin >> n;
        student[n] = 1;
    }
    for (int i = 1; i < 31; i++) {
        if (!student[i]) {
            cout << i << "\n";
        }
    }
}
