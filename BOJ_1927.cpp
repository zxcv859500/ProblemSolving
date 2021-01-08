#include<iostream>
#include<queue>
#include<functional>

using namespace std;

int main(void) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;

    while (n--) {
        int num;
        scanf("%d", &num);

        if (num != 0) {
            pq.push(num);
        } else {
            if (pq.size() == 0) {
                printf("0\n");
            } else {
                int temp = pq.top();
                printf("%d\n", temp);
                pq.pop();
            }
        }
    }
    return 0;
}
