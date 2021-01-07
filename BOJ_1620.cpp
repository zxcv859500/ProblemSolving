#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(void) {
    map<string, int> dogam;
    vector<string> dogam_str;
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        char str[1001];
        scanf("%s", str);
        dogam.insert({str, i});
        dogam_str.push_back(str);
    }

    for (int i = 0; i < m; i++) {
        char temp[1001];
        string str;
        scanf("%s", temp);
        str = temp;

        if (atoi(str.c_str()) == 0) {
            printf("%d\n", dogam[str]);
        } else {
            printf("%s\n", dogam_str[stoi(str) - 1].c_str());
        }
    }
    return 0;
}