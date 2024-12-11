/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


const int MAXN = 100005;
vector<int> tree[MAXN];

int leaf_values[MAXN];
char stickers[MAXN];
int n, k;


int dfs(int node, bool calculate_min) {
	if (tree[node].empty()) {
		return leaf_values[node];
	}

	vector<int> chield_values;
	for (int child : tree[node]) {
		chield_values.push_back(dfs(child, calculate_min));
	}

	if (stickers[node] == 'M' and calculate_min) {
		return *min_element(chield_values.begin(), chield_values.end());
		cout << *min_element(chield_values.begin(), chield_values.end()) << endl;
	}
	else {
		return *max_element(chield_values.begin(), chield_values.end());
		cout << *max_element(chield_values.begin(), chield_values.end()) << endl;
	}

}


int main() {
	cin >> n >> k;

	for (int i = 2; i <= n; i++) {
		int parent;
		cin >> parent;
		tree[parent].push_back(i);
	}


	for (int i = 1; i <= n; i++) {
		cin >> leaf_values[i];
	}
	

	int min_count = k;

	for (int i = 1; i <= n - 1; i++) {
		if (min_count > 0) {
			stickers[i] = 'M';
			min_count--;

		}
		else {
			stickers[i] = 'X';
		}

	}

	int min_result = dfs(1, true);
	int max_result = dfs(1, false);

	cout << min_result << " " << max_result << endl;
	return 0;


}*/