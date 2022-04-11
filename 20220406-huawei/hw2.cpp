// we have defined the necessary header files here for this problem.
// If additional header files are needed in your program, please import here.
#include <string.h>
#include <queue>
#include <stack>
using namespace std;

int g[5001][5001];
int ans[5001];
int check[5001];
int N, M;
queue<int> q;

int dfs(int src) {
    ans[src] = 1;
    check[src] = 1;
    for (int i = 0; i < N; i++) {
        if (g[src][i] == 1) {
            if (check[i] == 1) return -1;
            if (dfs(i) == -1) return -1;
        }
    }
    check[src] = 0;
    return 0;
}

int main()
{
    // please define the C input here. FOR EXAMPLE: int n; scanf("%d",&n);
    scanf("%d", &N);
    scanf("%d", &M);
    memset(g, 0, sizeof(g));
    memset(ans, 0, sizeof(ans));
    for (int i = 0; i < N; i++) {
        int dep;
        scanf("%d,", &dep);
        for (int j = 0; j < dep; j++) {
            int prev;
            scanf("%d,", &prev);
            g[i][prev] = 1;
        }
    }
//    printf("\n");
//    for (int i = 0; i < 10; i++) {
//        for (int j = 0; j < 10; j++) {
//            printf("%d ", g[i][j]);
//        }
//        printf("\n");
//    }
    if (dfs(M) == -1) {printf("-1"); return 0;}
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (i != M && ans[i] == 1) {
            if (count != 0) printf(",");
            printf("%d", i);
            count++;
        }
    }

    // please finish the FUNCTION body here.
    // please define the C output here. FOR EXAMPLE: printf("%d",a);
    return 0;
}