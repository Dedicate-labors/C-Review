//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//�������յ�֪ʶ�����һ���ֵ������У����ѣ�������ԭ���޸�
//	void nextPermutation(vector<int>& nums) {
//		int i, j, len = nums.size(); //���������������ԴӺ���ǰ�ҵ�һ��A[i] < A[j]��������Ҳ���˵���Ѿ���������
//		i = len - 2, j = len - 1;
//		while (i >= 0 && nums[i] >= nums[j]) {
//			--i;
//			--j;
//		}
//		if (i < 0) {
//			sort(nums.begin(), nums.end());
//			return; //��Ϊ�Ѿ��������˻�����������������,Ӧ�ñ����С�����
//		}
//		//�˳�ѭ����ʱ��nums[i] < nums[j]
//		//�ҵ���[j,end)���ǽ�������Ѱ��ǡ�ô���nums[i]��nums[k],��[j,end)�У��Ӻ���ǰ��
//		//swap(nums[i], nums[k]);
//		//������[j, end)ʹ���Ϊ���򣬱�С
//		int k = len-1;
//		while (k >= j) {
//			if (nums[k] > nums[i]) break;
//			--k;
//		}
//		swap(nums[i], nums[k]);
//		//����[j, end)
//		sort(nums.begin()+j, nums.end());
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> arr{3, 2, 1};
//	S.nextPermutation(arr);
//	for_each(arr.begin(), arr.end(), [](int &num) { cout << num << ends; });
//	return 0;
//}