//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//�ҵķ�������̫ðʧ�ˣ����׳���������ʵ���������㷨
//	void sortColors(vector<int>& nums) {
//		//ʹ�ÿ��ŵ�ԭ��
//		int n = nums.size();
//		int povit = 1, count = 0;//����
//		int left = 0, right = n - 1;
//		//������������з�Ϊ0��(1,2)
//		while (left < right)
//		{
//			while (left < right && nums[left] < povit)
//			{
//				++left;
//			}
//			swap(nums[left], nums[right]);
//			if (nums[right] == povit) count++;
//			while (left < right && nums[right] >= povit)
//			{
//				--right;
//				if (nums[right] == povit) count++;
//			}
//			swap(nums[left], nums[right]);
//		}
//		//���Ϊ�˸������Ľ�����⣬���沿�ֿ�����ʹ��һ�ο���
//		//right, n-1�˴�δ������ټ���countЭ��
//		if (count != 0) {
//			//����ѭ���Ľ�������֮һ����count�������
//			//�����µ�����ǰ��count������Ϊ1
//			for (int j = right; j <= n - 1; ++j) {
//				if (count == 0) nums[j] = 2;
//				else if (nums[j] >= 1) {
//					nums[j] = 1;
//					count--;
//				}
//			}
//		}
//		for_each(nums.begin(), nums.end(), [](int &num) {cout << num << ' '; });
//	}
//	//���˼·���ҵ�һ����������
//	//��ָ�뷨
//	void sortColors2(vector<int>& nums) {
//		int n = nums.size();
//		int ptr = 0;
//		//��0ȫ����ͷ��
//		for (int i = 0; i < n; ++i) {
//			if (nums[i] == 0) {
//				swap(nums[i], nums[ptr]);
//				ptr++;
//			}
//		}
//		//��1ȫ����0ͷ��֮��
//		for (int i = ptr; i < n; ++i) {
//			if (nums[i] == 1) {
//				swap(nums[i], nums[ptr]);
//				++ptr;
//			}
//		}
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> nums = {2,0,1};
//	S.sortColors(nums);
//	return 0;
//}