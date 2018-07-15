#include <cstdio>

bool check(bool pre, bool now) {
    if (!pre) {
        if (!now) {
            return false;
        }
    }
    return true;
}

int main(){
    char str[105], vowel[] = "aouie";
    while(~scanf("%s", str)) {
        bool pre = true, now =false, flag = true;
        for (int i = 0; str[i] != '\0'; ++i) {
            now = false;
            for (int j = 0; j < 5; ++j) {
                if (str[i] == vowel[j]) {
                    now = true;
                    break;
                }
            }
            //
            if (!check(pre, now)) {
                flag = false;
            }
            //
            if (str[i] == 'n') now = true;
            pre = now;
        }
        if (!check(pre, now)) {
            flag = false;
        }
        printf("%s\n", flag ? "YES" : "NO");
    }
    return 0;
}
