#include <cstdio>

int main() {
    long long n, m, sum = 0, res = 0;
    scanf("%I64d%I64d", &n, &m);
    for (int i = 0; i < m; ++i) {
        long long x, d;
        scanf("%I64d%I64d", &x, &d);
        res += x;
        if (d >= 0) {
            sum += (0 + n - 1) * n / 2 * d;
        } else {
            long long mid = n / 2;
            if (n % 2 == 0) {
                sum += (1 + mid) * mid / 2 * d;
                sum += (1 + mid - 1) * (mid - 1) / 2 * d;
            } else {
                sum += ((1 + mid) * mid / 2 * d) * 2;
            }
        }
        res += sum / n;
        sum %= n;
    }
    printf("%f\n",  res + sum * 1.0 / n);
    return 0;
}
