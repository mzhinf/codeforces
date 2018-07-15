#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> iout;
    scanf("%d", &n);
    int pre = 0;
    for (int i = 0; i < n; ++i) {
        int now;
        scanf("%d", &now);
        if (now == 1) {
            iout.push_back(pre);
        }
        pre = now;
    }
    iout.push_back(pre);
    printf("%d\n", iout.size() - 1);
    int i = 1;
    while (true) {
        printf("%d", iout[i]);
        i++;
        if (i < iout.size()) {
            printf(" ");
        } else {
            printf("\n");
            break;
        }
    }
    return 0;
}
