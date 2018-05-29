// Not finished yet
# include <iostream>
# include <cstdio>

using namespace std;

int main() {
    int n, k, m, value;
    float table[128], money;
    char c;
    string line;

    cin >> n;
    while (n--) {
        for (int i = 0; i < 128; ++i) table[i] = 0;
        cin >> k;
        while (k--) {
            cin >> c >> value;
            table[int(c)] = value/100.0;
        }

        money = 0;
        cin >> m;
        while (m--) {
            getline(cin, line);
            for (auto &ch : line) money += table[int(ch)];
        }
        printf("%.2f$\n", money);
    }
    return 0;
}
