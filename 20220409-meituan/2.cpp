#include <iostream>
#include <algorithm>
using namespace std;

pair<int, string> soldiers[50001];
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> soldiers[i].first;
    for (int i = 0; i < n; i++) cin >> soldiers[i].second;
    sort(soldiers, soldiers + n);
    for (int i = 0; i < n; i++) {
        cout << soldiers[i].second << endl;
    }
}