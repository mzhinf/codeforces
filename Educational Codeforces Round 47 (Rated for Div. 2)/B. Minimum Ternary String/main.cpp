#include <cstdio>

void print(char c, int n) {
    while (n--) {
        printf("%c", c);
    }
}

int main() {
    char str[100005];
    scanf("%s", str);
    // count one
    int oneNum = 0, zeroNum = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '1') oneNum++;
    }
    // find two and output
    bool first = true;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '2') {
            print('0', zeroNum);
            if (first) {
                print('1', oneNum);
                first = false;
            }
            print('2', 1);
            zeroNum = 0;
        } else if (str[i] == '0') {
            zeroNum++;
        }
    }
    print('0', zeroNum);
    if (first) print('1', oneNum);
    return 0;
}
