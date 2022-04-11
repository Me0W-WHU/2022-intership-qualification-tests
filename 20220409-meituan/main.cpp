#include <iostream>
using namespace std;

int n, m;
long long c1[1001], c2[1001];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> c1[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> c2[i];
    int p1 = n - 1, p2 = 0;
    while(1) {
        while (p1 >= 0 && c1[p1] != c2[m -1]) p1--;
        if (p1 < 0) {
            cout << n + m << endl;
            return 0;
        }
        while (p2 < m && c2[p2] != c1[0]) p2++;
        if (p2 >= m) {
            cout << n + m << endl;
            return 0;
        }
        if (p1 > m - 1 - p2) { p1--; break;}
        if (p1 < m - 1 - p2) { p2++; break;}
        //only proceed if they have equal length
        int flag = 1;
        for (int i = 0; i < p1; i++) {
            if (c1[i] != c2[p2 + i]) {flag = 0; p1--; p2--; break;}
        }
        if (flag) {
            cout << (n - 1 - p1) + p2 << endl;
            return 0;
        }
    }
}