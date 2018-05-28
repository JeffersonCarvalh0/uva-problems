# include <cstdio>
# include <map>

using namespace std;

int main() {
    int months, n, month;
    float payment, value_bank, value_car, d;
    map<int, float> depr;

    while(true) {
        scanf("%d%f%f%d", &months, &payment, &value_bank, &n);
        if (months < 1) break;
        depr.clear();

        while (n--) {
            scanf("%d%f", &month, &d);
            depr[month] = d;
        }

        value_car = value_bank;
        for (int i = 0; i < months; ++i) {
            if (depr.find(i) != depr.end()) d = depr[i];
            value_bank -= payment;
            value_car -= value_car * d;
            if (value_bank < value_car) {
                if (i == 1) printf("%d month\n", i);
                else printf("%d months\n", i);
                break;
            }
        }
    }

    return 0;
}
