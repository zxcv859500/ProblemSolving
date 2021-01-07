#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(void) {
    int n;
    vector<string> strList;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        strList.push_back(str);
    }
    auto comp = [](string str1, string str2) {
        if (str1.length() == str2.length()) {
            return str1 < str2;
        }
        return str1.length() < str2.length();
    };
    sort(strList.begin(), strList.end(), comp);
    string temp = "";
    for (int i = 0; i < strList.size(); i++) {                
        if (strList[i].compare(temp) != 0) {
            cout << strList[i];        
            if (i != strList.size() - 1) cout << endl;
        }
        temp = strList[i];
    }
    return 0;
}