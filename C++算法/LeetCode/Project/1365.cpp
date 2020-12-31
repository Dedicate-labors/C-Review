//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//
////方法一：暴力解法
////方法二:快速排序，使用了排序原理，自己想到了
////方法三：计数排序，限制较大，不描述了
//class Solution {
//public:
//	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//		int n = nums.size(), count;
//		vector<int> ret;
//		for (auto it : nums) {
//			count = 0;
//			for (int i = 0; i < n; ++i) {
//				if (nums[i] < it) count++;
//			}
//			ret.push_back(count);
//		}
//		return ret;
//	}
//	vector<int> smallerNumbersThanCurrent2(vector<int>& nums) {
//		vector<pair<int, int>> data;
//		int n = nums.size();
//		for (int i = 0; i < n; ++i) {
//			data.emplace_back(nums[i], i);
//		}
//		sort(data.begin(), data.end()); //排序的是key
//		vector<int> ret(n, 0);
//		int prev = -1;
//		for (int i = 0; i < n; ++i) {
//			if (prev == -1 || data[i].first > data[i - 1].first) {
//				prev = i;
//			}
//			//data[i].first == data[i - 1].first的时候
//			//ret[data[i].second] 等于一个prev
//			ret[data[i].second] = prev;
//		}
//		return ret;
//	}
//};
//
//int main() {
//
//	return 0;
//}