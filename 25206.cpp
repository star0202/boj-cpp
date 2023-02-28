#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, double> mp;
    mp.insert({"A+", 4.5});
	mp.insert({"A0", 4.0});
	mp.insert({"B+", 3.5});
	mp.insert({"B0", 3.0});
	mp.insert({"C+", 2.5});
	mp.insert({"C0", 2.0});
	mp.insert({"D+", 1.5});
	mp.insert({"D0", 1.0});
	mp.insert({"F", 0.0});
    string name, grade;
    double score, sum = 0;
    float result = 0;
    for (int i = 1; i < 21; i++) {
        cin >> name >> score >> grade;
        if (grade == "P") continue;
        result += score * mp[grade];
        sum += score;
    }
    result /= sum;
    cout << fixed << setprecision(4) << result;
}
