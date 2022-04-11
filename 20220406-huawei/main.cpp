#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    // please define the C++ input here. For example: int a,b; cin>>a>>b;;
    int N, M;
    cin >> N >> M;
    char scanner = 'a';
    unordered_map<string, vector<int>> freq = new unordered_map<string, vector<int>>(100, , 0);
    int title = 1, position = 0;
    for (int i = 0; i < 2 * M; i++) {
        position = 0;
        string word;
        int counter = 1;
        while(scanner != '\n') {
            scanf("%c", &scanner);
            if (scanner == ' ') counter++;
        }
        for (int j = 0; j < counter; j++) {
            cin >> word;
            freq[word][0] += 1;
            if (title == 1) {freq[word][1] += 1; freq[word][2] = position;}
            else if (title == -1) {freq[word][1] += 1; freq[word][3] = position;}
            position++;
        }
        title *= -1;
    }
    for (int i = 0; i < N; i++) {
        int max0 = 0, max1 = 0, max2 = 0, max3 = 0;
        string top_str;
        for (const auto &item : freq) {
            if (item.second[0] > max0) {
                max0 = item.second[0];
                max1 = item.second[1];
                max2 = item.second[2];
                max3 = item.second[3];
                top_str = item.first;
            } else if (item.second[0] == item.second[0] && item.second[1] > item.second[1]) {
                max0 = item.second[0];
                max1 = item.second[1];
                max2 = item.second[2];
                max3 = item.second[3];
            } else if (item.second[1] == item.second[1] && item.second[2] > item.second[2]) {
                max0 = item.second[0];
                max1 = item.second[1];
                max2 = item.second[2];
                max3 = item.second[3];
            } else if (item.second[2] == item.second[2] && item.second[3] > item.second[3]) {
                max0 = item.second[0];
                max1 = item.second[1];
                max2 = item.second[2];
                max3 = item.second[3];
            }
        }
        cout << top_str;
        freq[top_str][0] = 0;
        freq[top_str][1] = 0;
        freq[top_str][2] = 0;
        freq[top_str][3] = 0;
    }
    // please finish the function body here.
    // please define the C++ output here. For example:cout<<____<<endl;

    return 0;
}
