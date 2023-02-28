#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length(), cnt = 0;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}
