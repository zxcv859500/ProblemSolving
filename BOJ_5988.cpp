#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int N;
	scanf("%d", &N);
	while (N--) {
		string k;
		cin >> k;
		int num = k[k.length() - 1] - '0';
		printf("%s\n", num % 2 == 0 ? "even" : "odd");
	}
//	system("pause");
	return 0;
}