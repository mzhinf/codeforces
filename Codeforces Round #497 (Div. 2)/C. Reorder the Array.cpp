#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int iarray[100005];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &iarray[i]);
    }
    sort(iarray, iarray + n);
    int i = 0, j = 0;
    while (j < n) {
        if (iarray[i] < iarray[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }
    printf("%d\n", i);
    return 0;
}

/*
10 1 1 1 5 5 3
1 1 1 3 5 5 10
*/
