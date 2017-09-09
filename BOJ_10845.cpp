#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstring>
#include<functional>
#include<cstdio>
#include<stack>

#pragma warning(disable:4996)

#define INTMAX 0x7fffffff
#define gets(x) cin.getline(x,sizeof(x))
#define square(x) (x)*(x)
using namespace std;

using lld = long long;
using pii = pair<int, int>;

int main(void) {
	int n;
	scanf("%d", &n);
	queue<int> q;
	for (int i = 0; i < n; i++) {
		string str;
		int num;
		cin >> str;
		if (str == "push") {
			cin >> num;
			q.push(num);
		}
		else if (str == "pop") {
			if (q.empty())
				printf("-1\n");
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (str == "size") 
			cout << q.size() << endl;
		else if (str == "empty") {
			if (q.empty())
				printf("1\n");
			else
				printf("0\n");
		}
		else if (str == "front") {
			if (q.empty())
				printf("-1\n");
			else
				printf("%d\n", q.front());
		}
		else if(str == "back"){
			if (q.empty())
				printf("-1\n");
			else
				printf("%d\n", q.back());
		}
	}
//	system("pause");
	return 0;
}