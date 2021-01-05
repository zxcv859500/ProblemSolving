#include<iostream>
#include<vector>

using namespace std;

vector<int> dp_one(41);
vector<int> dp_zero(41);

pair<int, int> fibo(int n) {
    if (n == 0) return {1, 0};
    else if(n == 1) return {0, 1};
    
    if (dp_one[n] != 0) return {dp_zero[n], dp_one[n]};
    auto first_result = fibo(n - 1);
    auto second_result = fibo(n - 2);

    pair<int, int> result = { first_result.first + second_result.first, 
                        first_result.second + second_result.second };
    dp_zero[n] = result.first;
    dp_one[n] = result.second;
    return {dp_zero[n], dp_one[n]};
}

int main(void) {
    int T;
    cin >> T;
    dp_zero[0] = 1;
    dp_zero[1] = 0;
    dp_one[0] = 0;
    dp_one[1] = 1;
    while(T--) {
        int n;
        cin >> n;
        fibo(n);
        cout << dp_zero[n] << " " << dp_one[n] << endl;
    }
    return 0;
}