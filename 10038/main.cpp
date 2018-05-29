# include <iostream>
# include <bitset>

using namespace std;

inline int abs(int a) { return a < 0 ? a*(-1) : a; }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, seq[3005];
    bitset<3005> found;

    while (cin >> n) {
        found.reset();
        for (int i = 0; i < n; ++i) {
            cin >> seq[i];
            if (i > 0) {
                int sub = abs(seq[i] - seq[i - 1]);
                if (sub < n) found[sub] = 1;
            }
        }
        int i;
        for (i = 1; i < n; ++i) if (!found[i]) break;
        if (i == n) cout << "Jolly\n"; else cout << "Not jolly\n";
    }
    return 0;
}
