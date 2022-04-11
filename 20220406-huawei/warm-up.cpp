#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = s.length() - 1;
    int count = 0;
    while(s[i] != ' ' && i >=0) {
        count++;
        i--;
    }
    cout << count;
}