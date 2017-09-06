#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int N,sum = 0, max = -INTMAX;
	scanf("%d", &N);
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &v[i]);
		sum += v[i];
	}
	for (int i = 0; i < N; i++) {
		int tmp;
		tmp = 0;
		for (int j = i; j < N; j++) {
			tmp += v[j];
			if ((sum - tmp > tmp ? tmp : sum - tmp) > max)
				max = sum - tmp > tmp ? tmp : sum - tmp;
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0;
}