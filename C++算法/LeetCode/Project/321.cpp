//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#include<map>
//
//using namespace std;
//
////class Solution {
////public:
////	//����Ϊk�����飬������Ҫ��󣺴�->С������
////	//�������˳�򣿣����û�����Ҫ��ʹ���ܷ���10��Ԫ�ص�Ͱ����
////	//����һ��
////	//����func(nums1,nums2,max,ans,k)���ж��������������У��Ҵ������Һ��������ʣ����Ŀ�㹻ansʣ��λ��
////	//�ɹ������������(max)��ʣ������(nums1,nums2,k)��ʧ���򱣳ֵ�ǰ��������Ҵӵڶ������ּ���
////	//����ʣ������ ��Զ >= ans���������λ����=��ʱ��ֱ�ӳ����(���Ƿ���nums1,nums2)
////	vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
////
////	}
////};
//
//class Solution {
//public:
//	//����nums1��nums2��˳�򲻱䣬ʹ�õ���ջ(ջ�׵�ջ���ǽ���)
//	//�ֱ����x��nums1Ԫ�صı������˳��Ľ�ջ��y��nums2Ԫ�صı������˳��Ľ�ջ
//	//�ϲ�����ջ
//	//�ҵ�����ջ
//	vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
//		int m = nums1.size(), n = nums2.size();
//		vector<int> maxSubsequence(k, 0);
//		int start = max(0, k - n), end = min(k, m);
//		for (int i = start; i <= end; i++) {
//			//i�Ƕ�nums1��ȡ������ĸ���,����������min(k,m)
//			//���޼���nums1����Ҫȡ�����ٸ�Ԫ�أ�k > n��nums1��ȡk-n����k <= n, �ʹ�0��ʼ
//			vector<int> subsequence1(MaxSubsequence(nums1, i));
//			vector<int> subsequence2(MaxSubsequence(nums2, k - i));
//			vector<int> curMaxSubsequence(merge(subsequence1, subsequence2));
//			if (compare(curMaxSubsequence, 0, maxSubsequence, 0) > 0) {
//				maxSubsequence.swap(curMaxSubsequence);
//			}
//		}
//		return maxSubsequence;
//	}
//
//	vector<int> MaxSubsequence(vector<int>& nums, int k) {
//		int length = nums.size();
//		vector<int> stack(k, 0);
//		int top = -1;
//		int remain = length - k;
//		//remain��ʣ���ѡ�����֣�ǰ��k�������Ǳ����
//		//1. ��stack�е������˳�ջʱ����ʾ�ض���Ҫһ�����������䣬����remain--
//		//stack[++top] = numѹջʱ
//		//2. ��top > k - 1ʱ��num��ʱ���±�iһ�� >= k -1,����remain
//		//while��if(top < k - 1)��һ�ԣ�else{}�Լ�Ҳ��һ���߼�
//		for (int i = 0; i < length; i++) {
//			int num = nums[i];
//			while (top >= 0 && stack[top] < num && remain > 0) {
//				top--;
//				remain--;
//			}
//			if (top < k - 1) {
//				stack[++top] = num;
//			}
//			else {
//				remain--;
//			}
//		}
//		return stack;
//	}
//
//	vector<int> merge(vector<int>& subsequence1, vector<int>& subsequence2) {
//		int x = subsequence1.size(), y = subsequence2.size();
//		if (x == 0) {
//			return subsequence2;
//		}
//		if (y == 0) {
//			return subsequence1;
//		}
//		int mergeLength = x + y;
//		vector<int> merged(mergeLength);
//		int index1 = 0, index2 = 0;
//		for (int i = 0; i < mergeLength; i++) {
//			if (compare(subsequence1, index1, subsequence2, index2) > 0) {
//				merged[i] = subsequence1[index1++];
//			}
//			else {
//				merged[i] = subsequence2[index2++];
//			}
//		}
//		return merged;
//	}
//
//	int compare(vector<int>& subsequence1, int index1, vector<int>& subsequence2, int index2) {
//		int x = subsequence1.size(), y = subsequence2.size();
//		while (index1 < x && index2 < y) {
//			int difference = subsequence1[index1] - subsequence2[index2];
//			if (difference != 0) {
//				return difference;
//			}
//			index1++;
//			index2++;
//		}
//		return (x - index1) - (y - index2);
//	}
//};
//
//int main()
//{
//	int a = 7, b = 2;
//	int r;
//	r = a % b;
//	return 0;
//}