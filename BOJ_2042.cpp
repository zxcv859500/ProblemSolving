#include<iostream>
#include<vector>
#include<cmath>
#pragma warning(disable:4996)
using namespace std;

using lld = long long;

lld init(vector<lld> &tree, vector<lld> &a, int node, int start, int end)
{
	if (start == end)
		return tree[node] = a[start];
	else
		return tree[node] = init(tree, a, node * 2, start, (start + end) / 2)
		+ init(tree, a, node * 2 + 1, (start + end) / 2 + 1, end);
}

lld sum(vector<lld> &tree, int node, int start, int end, int left, int right)
{
	if (left > end || right < start)
		return 0;
	if (left <= start && right >= end)
		return tree[node];
	return sum(tree, node * 2, start, (start + end) / 2, left, right)
		+ sum(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
}

void update(vector<lld> &tree, int node, int start, int end, int index, long long diff)
{
	if (index < start || index>end) return;
	tree[node] += diff;
	if (start != end) {
		update(tree, node * 2, start, (start + end) / 2, index, diff);
		update(tree, node * 2 + 1, (start + end) / 2 + 1, end, index, diff);
	}
}

int main(void) {
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	vector<lld> a(n);
	int h = (int)ceil(log2(n));
	int tree_size = (1 << (h + 1));
	vector<lld> tree(tree_size);
	m += k;
	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	init(tree, a, 1, 0, n - 1);
	while (m--) {
		int t1, t2;
		lld t3;
		scanf("%d%d%lld", &t1, &t2, &t3);
		if (t1 == 1) {
			t2 -= 1;
			lld diff = t3 - a[t2];
			a[t2] = t3;
			update(tree, 1, 0, n - 1, t2, diff);
		}
		if (t1 == 2)
			printf("%lld", sum(tree, 1, 0, n - 1, t2 - 1, t3 - 1));
	}
	system("pause");
	return 0;
}