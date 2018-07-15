#include <cstdio>

int main()
{
    int n, m, c[1005], a[1005], ans = 0;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &c[i]);
    }
    for (int i = 0, j = 0; i < m; ++i) {
        int tmp;
        scanf("%d", &tmp);
        while (j < n) {
            if (tmp >= c[j]) {
                j++;
                ans++;
                break;
            } else {
                j++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
