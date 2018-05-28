# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n, c, ans;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        ans = 0;
        cin >> n;
        while (n--) { cin >> c; ans = max(c, ans); }
        cout << "Case " << i + 1 << ": " << ans << '\n';
    }
    return 0;
}
