//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//
////����һ�������ⷨ
////������:��������ʹ��������ԭ���Լ��뵽��
////�������������������ƽϴ󣬲�������
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
//		sort(data.begin(), data.end()); //�������key
//		vector<int> ret(n, 0);
//		int prev = -1;
//		for (int i = 0; i < n; ++i) {
//			if (prev == -1 || data[i].first > data[i - 1].first) {
//				prev = i;
//			}
//			//data[i].first == data[i - 1].first��ʱ��
//			//ret[data[i].second] ����һ��prev
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