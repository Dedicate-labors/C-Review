//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//		unordered_set<int> numsSet1; //创建一个带有不重复元素的集合1
//		unordered_set<int> nums;
//		for (auto num : nums1) {
//			if (numsSet1.count(num) == 0) numsSet1.insert(num);
//		}
//		for (auto num : nums2) {
//			if (numsSet1.count(num))
//				nums.insert(num);
//		}
//		vector<int> ret(nums.begin(), nums.end());
//		return ret;
//	}
//};
//
//int main() {
//
//	return 0;
//}