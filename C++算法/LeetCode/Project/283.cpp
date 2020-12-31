//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//必须在原数组上操作，不能拷贝额外的数组
//	void moveZeroes(vector<int>& nums) {
//		int i = 0, j = 0, len = nums.size(); //i,j 都是下标，对nums开始移动
//		//i是遇到0停下，j是遇到i之后的非0停下，所以i先移动
//		while (i < len) {
//			//外循环找到第一个为0的就行了
//			while (i < len && nums[i] == 0) {
//				j = i+1;
//				while (j < len && nums[j] == 0) ++j;
//				if (j >= len) {
//					i = len;
//					break;
//				}
//				nums[i] = nums[j];
//				nums[j] = 0;
//				i = i + 1;
//			}
//			++i;
//		}
//	}
//};
//
//int main()
//{
//
//	return 0;
//}