#include <cstdio>
#include <vector>

using namespace std;

vector<pair<int, int>> ans;

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n && ans.size() < m; ++i) {
        for (int j = i + 1; j <= n && ans.size() < m; ++j) {
            if (gcd(i, j) == 1) {
                ans.push_back(pair<int, int>(i, j));
            }
        }
    }
    // m > n - 1 can structure undirected graph
    if (m >= n - 1 && ans.size() == m) {
        printf("Possible\n");
        for (auto i = ans.begin(); i != ans.end(); ++i) {
            printf("%d %d\n", i->first, i->second);
        }
    } else {
        printf("Impossible\n");
    }
    return 0;
}
