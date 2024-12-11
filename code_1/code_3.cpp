/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
	int n = nums.size();
	vector<vector<int>> ans;
	sort(nums.begin(), nums.end());

	for (int a = 0; a < n; a++) {
		for (int b = a + 1; b < n; b++) {
			int c = b + 1;
			int d = n - 1;
			while (c < d) {
				long long sum = nums[a] + nums[b] + nums[c] + nums[d];
				if (sum < target) {
					c++;
				}
				else if (sum > target) {
					d--;
				}
				else {
					vector<int> v = { nums[a], nums[b], nums[c], nums[d] };
					if (find(ans.begin(), ans.end(), v) == ans.end()){
						ans.push_back(v);
					}
					c++;
					d--;
				}
				

			}
		}
	}
	return ans;
}


int main() {
	vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	vector<vector<int>>v2;
	v2 = fourSum(v1,24 );

	for (auto& v3 : v2) {
		for (auto& v4 : v3) {
			cout << v4 << endl;
		}
	}


}*/


