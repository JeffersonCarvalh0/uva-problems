// Not finished
# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, p, r, ans_order;
    bool first = true;
    string name, ans_name = "";
    float d, ans_d, cur_comp, ans_comp;

    while (true) {
        cin >> n >> p;
        if (n == 0 && p == 0) break;

        ans_comp = 0;
        ans_d = 99999999.0;
        for (int i = 0; i < p; ++i) {
            cin >> name >> d >> r;
            cur_comp = r/n;
            if (cur_comp > ans_comp || (cur_comp == ans_comp && d < ans_d)) {
                cur_comp = ans_comp; ans_name = name; ans_d = d; ans_order = i + 1;
            }
        }
        if (!first) cout << '\n';
        first = false;
        cout << "RFP #" << ans_order << '\n';
        cout << ans_name << '\n';
    }
    return 0;
}
