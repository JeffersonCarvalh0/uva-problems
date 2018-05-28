# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t, salaries[3];
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> salaries[0] >> salaries[1] >> salaries[2];
        sort(salaries, salaries + 3);
        cout << "Case " << i + 1 << ": " << salaries[1] << '\n';
    }

    return 0;
}
