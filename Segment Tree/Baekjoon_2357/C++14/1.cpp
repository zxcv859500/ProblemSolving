#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

using lld = long long;
using pii = pair<int, int>;

int init_max(vector<pii> &tree, vector<int> &a, int node, int start, int end) {
	if (start == end)
		return tree[node].first = a[start];
	return tree[node].first = max(init_max(tree, a, node * 2, start, (start + end) / 2)
		, init_max(tree, a, node * 2 + 1, (start + end) / 2 + 1, end));
}

int init_min(vector<pii> &tree, vector<int> &a, int node, int start, int end) {
	if (start == end)
		return tree[node].second = a[start];
	return tree[node].second = min(init_min(tree, a, node * 2, start, (start + end) / 2)
		, init_min(tree, a, node * 2 + 1, (start + end) / 2 + 1, end));
}

int find_max(vector<pii> &tree, int node, int start, int end, int left, int right) {
	if (left > end || right < start)
		return -1;
	if (left <= start && right >= end)
		return tree[node].first;
	return max(find_max(tree, node * 2, start, (start + end) / 2, left, right)
		, find_max(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right));
}

int find_min(vector<pii> &tree, int node, int start, int end, int left, int right) {
	if (left > end || right < start)
		return 0x7fffffff;
	if (left <= start && right >= end)
		return tree[node].second;
	return min(find_min(tree, node * 2, start, (start + end) / 2, left, right)
		, find_min(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right));
}

int main(void) {
	int n, m;
	scanf("%d%d", &n, &m);
	vector<int> a(n);
	int h = (int)ceil(log2(n));
	int tree_size = (1 << (h + 1));
	vector<pii> tree(tree_size);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	init_max(tree, a, 1, 0, n - 1);
	init_min(tree, a, 1, 0, n - 1);
	while (m--) {
		int t1, t2;
		scanf("%d%d", &t1, &t2);
		printf("%d %d\n", find_min(tree, 1, 0, n - 1, t1 - 1, t2 - 1), find_max(tree, 1, 0, n - 1, t1 - 1, t2 - 1));
	}
	system("pause");
	return 0;
}