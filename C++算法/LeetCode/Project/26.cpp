//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
////��Ŀ������һ���������飬O(1)�ռ��޸�֮�󷵻�һ���޸ĺõ�nums�ĳ���
//
////�ⷨ1����ͬ��һ�������һ��ʹ�õ�������̬ɾ����ͬ��
////�ⷨ2��ʹ��˫ָ�룬��û������ɾ��Ԫ�أ�ֻ�ǽ�Ԫ���ۻ���ĩβ
////i=0,j=1��ʼ�������飬�ҵ�nums[i] != nums[j],��nums[i+1] = nums[j]
////++i,j++,ֱ��j����ĩβ�±�
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		vector<int>::iterator begin = nums.begin();
//		int left = *begin, right;
//		begin++;
//		while (begin != nums.end())
//		{
//			right = *begin;
//			if (left == right) {
//				begin = nums.erase(begin);
//			}
//			else {
//				begin++;
//				left = right;
//			}
//		}
//		return nums.size();
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> nums = {1,1,2};
//	S.removeDuplicates(nums);
//	return 0;
//}