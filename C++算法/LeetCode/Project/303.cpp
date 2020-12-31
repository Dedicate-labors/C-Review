//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
////我写的是暴力解法
////方法二：缓存，使用哈希表维护一个i-j的结果在内部，如果遇到相同的就可以直接返回
////方法三：缓存，一次循环中将i = 0到j为任意下标的累加和存储到一维数组中,使用的时候sum[j+1] - sum[i];
//class NumArray {
//public:
//	NumArray(vector<int>& nums) {
//		//temp = nums;
//		temp = make_shared<vector<int>>(nums.size()+1, 0);
//		for (int i = 0; i < nums.size(); ++i) {
//			(*temp)[i + 1] = (*temp)[i] + nums[i];
//		}
//	}
//
//	int sumRange(int i, int j) {
//		return (*temp)[j + 1] - (*temp)[i];
//	}
//private:
//	shared_ptr<vector<int>> temp;
//};
//
//
//int main() {
//	vector<int> nums;
//	NumArray* obj = new NumArray(nums);
//	int i, j;
//	int param_1 = obj->sumRange(i, j);
//	return 0;
//}