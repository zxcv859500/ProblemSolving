#include<bits/stdc++.h>
using namespace std;

int main(void) {
	int T, max = -INTMAX;
	string res;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			int num;
			string str;
			cin >> str;
			scanf("%d", &num);
			if (max < num) {
				max = num;
				res = str;
			}
		}
		cout << res << endl;
	}
	system("pause");
	return 0;
}