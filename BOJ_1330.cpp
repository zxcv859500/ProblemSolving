#include<iostream>

using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;

    if (n > m) {
        cout << ">" << endl;
    } else if (n < m) {
        cout << "<" << endl;
    } else {
        cout << "==" << endl;
    }
    return 0;
}