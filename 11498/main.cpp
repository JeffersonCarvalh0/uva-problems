# include <cstdio>

int main() {
    int k, n, m, x, y;

    while (true) {
        scanf("%d", &k); if (k == 0) break;
        scanf("%d%d", &n, &m);
        while (k--) {
            scanf("%d%d", &x, &y);
            if (x == n || y == m) printf("divisa\n");
            else if (x > n) {
                if (y > m) printf("NE\n");
                if (y < m) printf("SE\n");
            } else {
                if (y > m) printf("NO\n");
                if (y < m) printf("SO\n");
            }
        }
    }

    return 0;
}
