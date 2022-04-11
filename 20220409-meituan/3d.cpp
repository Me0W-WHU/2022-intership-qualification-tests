#include <iostream>
using namespace std;

int p[10001];
int u[10001];
int v[10001];
int m, n, q;
int main()
{
    cin >> n >> m;
    for (int i = 0; i <= n; i++) p[i] = i;
    for (int i = 0; i < m; i++) cin >> u[i];
    for (int i = 0; i < m; i++) cin >> v[i];
    //union
    for (int i = 0; i < m; i++) {
        int temp = p[u[i]];
        for (int j = 0; j < n; j++) {
            if (p[j] == temp) p[j] = p[v[i]];
        }
        for (int k = 0; k <= n; k++) cout << p[k] << " ";
        cout << endl;
    }
    //find
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if (p[a] == p[b]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}