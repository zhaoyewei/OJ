#include <cmath>
#include <cstring>
#include <set>
#include <stdio.h>
using namespace std;
#define maxn 100000
set<int> getPrimes(int argc, char const *argv[]) {
    int vis[maxn];
    set<int> res;
    res.insert(1);
    memset(vis, 0, maxn);
    int m = sqrt(maxn);
    for (int i = 2; i <= m; i++) {
        if (!vis[i]) {
            for (int j = i * i; j < maxn; j += i) {
                vis[j] = i;
            }
        } else {
            res.insert(i);
        }
    }
#ifdef DEBUG
    printf("Print start\n");
    for (int i = 0; i < maxn; i++) {
        if (!vis[i])
            printf("%d ", i);
    }
    printf("Print over");
#endif
    return res;
}
