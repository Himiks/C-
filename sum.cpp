#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int front;
		int sum = nums[0] + nums[1] + nums[2];
		int sum1 = 0;
		for (int i = 0; i < nums.size(); i++) {
			front = i + 1;
			int back = nums.size() - 1;
			while (front < back) {
				sum1 = nums[front] + nums[back] + nums[i];
				if (abs(sum1 - target) <= abs(sum - target)) {
					sum = sum1;
				}
				if (sum1 > target) {
					back--;
				}
				else if (sum1 < target) {
					front++;
				}
				else {
					return sum1;
				}



			}


		}
		return sum;

	}







};

int main() {
	// Создаем экземпляр класса Solution
	Solution sol;

	// Инициализируем вектор и целевое значение
	vector<int> nums = { -1, 2, 1, -4 };
	int target = 1;

	// Вызываем метод threeSumClosest и передаем в него вектор и целевое значение
	int result = sol.threeSumClosest(nums, target);

	// Выводим результат
	cout << "The closest sum is: " << result << endl;

	return 0;
}