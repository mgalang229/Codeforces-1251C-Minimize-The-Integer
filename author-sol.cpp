#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
    string a;
    cin >> a;
    string s[2];
    for (char& c : a) {
        s[int(c-'0')&1] += c;
    }
    reverse(s[0].begin(), s[0].end());
    reverse(s[1].begin(), s[1].end());
    string res = "";
    while (!(s[0].empty() && s[1].empty())) {
        if (s[0].empty()) {
            res += s[1].back();
            s[1].pop_back();
            continue;
        }
        if (s[1].empty()) {
            res += s[0].back();
            s[0].pop_back();
            continue;
        }
        if (s[0].back() < s[1].back()) {
            res += s[0].back();
            s[0].pop_back();
        } else {
            res += s[1].back();
            s[1].pop_back();
        }
    }
    cout << res << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
