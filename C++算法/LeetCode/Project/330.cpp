//#include<iostream>
//#include<vector>
//using namespace std;
//
////��Ŀ�����ڸ�������õ�����nums,��[1..n]��ѡ���������ּ���nums�У�ʹ��
////[1..n]�����ڵ��κ����ֶ�������nums��ĳ�������ֱ�ʾ����������Ҫ��������ָ���
////����1������������x���������[1,x-1]�ڵ��������ֶ��Ѿ��ܱ�nums��ʾ��x��nums�У���ô[1, 2x-1]ͬ��Ҳ�ܱ�nums��ʾ
////����2����nums���ܱ�ʾ��[1..x-1]�������ģ����x����չ�ɱ�ʾ[1..2x-1]�������ģ���һ�� ȱʧ������ ����С��2x
////������������������
//
//class Solution {
//public:
//	int minPatches(vector<int>& nums, int n) {
//		int patches = 0;
//		long long x = 1; //�˴���x��ʾ������������x-1,[1..x-1]���Ƕ���Ϊ��ʵ�ֳ���������
//		int length = nums.size(), index = 0; //numsԪ�ر�����Ҫ�ı���
//		while (x <= n)
//		{
//			//��nums[index]������ <= xʱ�� x�����ܱ����ǣ������������ޱ�Ϊ [1..x+nums[index]+1]
//			if (index < length && nums[index] <= x)
//			{
//				x += nums[index];
//				index++;
//			}
//			else {
//				//��֮��x�޷���������ס��ʱ��[1..x-1]�Ǳ��������˵ģ�����ֱ�����x��nums�У������������ޱ�Ϊ[1..2x-1]
//				x <<= 1;
//				patches++;
//			}
//		}
//		return patches;
//	}
//};
//
//int main()
//{
//	return 0;
//}