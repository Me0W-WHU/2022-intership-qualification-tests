#include <iostream>
#define M 1000000007
using namespace std;

int main()
{
    long long n;
    cin >> n;
    cout << n * (n - 1) % M * (n - 1)  % M * (n - 1) % M;
}