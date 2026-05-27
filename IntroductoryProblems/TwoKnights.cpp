#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    for (long long i = 1; i <= n; i++) {
        long long ans = (i-1) * (i+4) * (i*i - 3*i + 4) / 2; // oeis carry ngl
        cout << ans << "\n";
    }

    return 0;
}
