#include <cstdio>
#include <cstring>

int main() {
    char str[2][200005];
    scanf("%s%s", str[0], str[1]);
    int i = strlen(str[0]) - 1, j = strlen(str[1]) - 1;
    while (i >= 0 && j >= 0) {
        if (str[0][i] == str[1][j]) {
            --i;
            --j;
        } else {
            break;
        }
    }
    printf("%d\n", i + j + 2);
    return 0;
}
