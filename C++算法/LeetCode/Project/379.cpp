//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
////Ŀ�ģ�����һ���ڶ����У�����ʹ�õ���ջ
////һ�������������������������������Ĳ��Ƿ���������
//
////dp[i]��i��β�İڶ����г���,��nums[i]������Բ�Ҫ��if(nums[i+1] �Ƚ� nums[i])
////dp[i+1] = dp[i] + 1 ���� dp[i+1] = dp[i];
//class Solution {
//public:
//	int wiggleMaxLength(vector<int>& nums) {
//		int size = nums.size();
//		if (size == 0) return  0;
//		if (size == 1) return 1;
//		//�˴���size >= 2
//		vector<int> dp(size, 0);
//		dp[0] = 1; //ǰ����������ͬ����2����ͬ����1
//		int i = 1, j = 0;
//		while (i < size && nums[i] == nums[j])
//		{
//			dp[i] = 1;
//			i++;
//		}
//		if (i >= size) return 1;
//		dp[i] = 2;
//		int pre = nums[i] - nums[j], next;
//		j = i, i += 1; //j�Ķ�λ��̫�������µĴ���j��λӦ���ǵġ��϶������ߡ�ɽ�͡�
//
//		while (i < size) 
//		{
//			//�Ƚϵ�ǰ�����һ�ε�flag �Ƿ� ������ͬ ���� ���
//			next = nums[i] - nums[j];
//			if (next == 0) {
//				dp[i] = dp[i - 1]; //nums[i]����Ҫ
//			}
//			else {
//				if ((next >> 31) != (pre >> 31)) {
//					dp[i] = dp[i - 1] + 1;
//				}
//				else {
//					dp[i] = dp[i - 1]; //nums[i]����Ҫ
//				}
//				pre = next;
//				j = i;
//			}
//			++i;
//		}
//		return dp[size - 1];
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> tmp = {33,53,12,64,50,41,45};
//	S.wiggleMaxLength(tmp);
//	return 0;
//}