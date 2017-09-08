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
	int N;
	cin >> N;
	vector<int> v(N);
	stack<int> s;
	queue<int> tmp;
	queue<char> res;
	for (int i = 0; i < N; i++) {
		scanf("%d", &v[i]);
		tmp.push(i + 1);
	}
	for (int & i : v) {
		if (!s.empty() && s.top() >= i) {
			while (!s.empty() && s.top() != i) {
				s.pop();
				res.push('-');
			}
			if (!s.empty() && s.top() == i) {
				s.pop();
				res.push('-');
			}
			else {
				printf("NO");
				return 0;
			}
		}
		else
			//if (!tmp.empty() && tmp.front() > i) 
		{
			while (!tmp.empty() && tmp.front() != i) {
				s.push(tmp.front());
				tmp.pop();
				res.push('+');
			}
			if (!tmp.empty() && tmp.front() == i) {
				s.push(tmp.front());
				tmp.pop();
				res.push('+');
				s.pop();
				res.push('-');
			}
			else {
					printf("NO");
					return 0;
			}
		}
	}
	while (!res.empty()) {
		printf("%c\n", res.front());
		res.pop();
	}
//	system("pause");
	return 0;
}