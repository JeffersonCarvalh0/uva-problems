# include <cstdio>

int main() {
    int n, b, h, w, p, a, cost;

    while (scanf("%d%d%d%d", &n, &b, &h, &w) == 4) {
        cost = b + 1;
        while (h--) {
            scanf("%d", &p);
            for (int i = 0; i < w; ++i) {
                scanf("%d", &a);
                if (p * n <= b && p * n < cost && a >= n) cost = p * n;
            }
        }
        if (cost == b + 1) printf("stay home\n");
        else printf("%d\n", cost);
    }
    return 0;
}
