#include <cstdio>

int main() {
    int n, x, y, pre = 1e9 + 7;
    scanf("%d", &n);
    bool flag = true;
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &x, &y);
        if (x < y) {
            int tmp = x;
            x = y;
            y = tmp;
        }
        if (pre >= x) {
            pre = x;
        } else if (pre >= y){
             pre = y;
        } else {
            flag = false;
        }
    }
    printf("%s\n", flag ? "YES" : "NO");
    return 0;
}
