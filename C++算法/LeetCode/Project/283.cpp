//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//������ԭ�����ϲ��������ܿ������������
//	void moveZeroes(vector<int>& nums) {
//		int i = 0, j = 0, len = nums.size(); //i,j �����±꣬��nums��ʼ�ƶ�
//		//i������0ͣ�£�j������i֮��ķ�0ͣ�£�����i���ƶ�
//		while (i < len) {
//			//��ѭ���ҵ���һ��Ϊ0�ľ�����
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