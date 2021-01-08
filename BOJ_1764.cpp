#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    map<string, int> list;
    vector<string> answer;

    for (int i = 0; i < n; i++) {
        string str;
        char temp[1001];
        scanf("%s", temp);
        str = temp;
        list.insert({str, 1});
    }

    for(int i = 0; i < m; i++) {
        string str;
        char temp[1001];
        scanf("%s", temp);
        str = temp;

        if (list.find(str) != list.end()) {
            answer.push_back(str);
        }
    }

    cout << answer.size() << endl;

    sort(answer.begin(), answer.end());

    for (auto str : answer) {
        printf("%s\n", str.c_str());
    }
    return 0;
}