#include <bits/stdc++.h>
using namespace std;

vector<string> gray(int n) {
    if (n == 1) {
        return {"0", "1"};
    }

    vector<string> prev = gray(n - 1);
    vector<string> result;

    // first half
    for (string s : prev) {
        result.push_back("0" + s);
    }

    // second half (reverse order)
    reverse(prev.begin(), prev.end());

    for (string s : prev) {
        result.push_back("1" + s);
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<string> ans = gray(n);

    for (string s : ans) {
        cout << s << '\n';
    }
}