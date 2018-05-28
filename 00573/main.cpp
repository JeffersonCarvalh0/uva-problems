# include <cstdio>

int main() {
    int h, d, f, days;
    float u, cur_height, fadigue_height;

    while (true) {
        scanf("%d%f%d%d", &h, &u, &d, &f);
        if (h == 0) break;

        fadigue_height = f/100.0 * u;
        cur_height = 0; days = 1;

        while (true) {
            if (u > 0) { cur_height += u; u -= fadigue_height; }
            if (cur_height > h) break;
            cur_height -= d;
            if (cur_height < 0) break;
            ++days;
        }

        if (cur_height > h) printf("success on day %d\n", days);
        else if (cur_height < 0) printf("failure on day %d\n", days);
    }

    return 0;
}
