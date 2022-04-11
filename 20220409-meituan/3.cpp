#include <iostream>
#include <string.h>
using namespace std;

int p[100][100];
int u[100];
int v[100];
int m, n, q;
int main()
{
    cin >> n >> m;
    memset(p, 0, sizeof(p));
    for (int i = 0; i < m; i++) cin >> u[i];
    for (int i = 0; i < m; i++) cin >> v[i];
    for (int i = 0; i < m; i++) p[u[i]][v[i]] = 1;

    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if (p[a][b] == 1 || p[b][a] == 1 ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}