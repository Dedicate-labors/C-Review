//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
////方法2：两次遍历，一次遍历将奇数放入奇下标，一次遍历，将偶数放入偶数下标
////方法3：在我的方法上改进，i是偶下标，j是奇下标，A[i]是奇数时，找到下一个A[j]偶数，交换两者
//
//class Solution {
//public:
//	//非负整数数组A
//	vector<int> sortArrayByParityII(vector<int>& A) {
//		int i = 0, j = 0, len=A.size(); //i是第一个不合适的，j是后面和i不相同的另一种不合适情况
//		//i和j交换后，j = i+1, i从新寻找下一个第一个不合适的，j也从新出发
//		while (i < len) {
//			//如果i和A[i]是正常的abs(A[i] - i) 是偶数，否则是奇数
//			if (abs(A[i] - i) % 2 != 0)
//			{
//				//寻找和i不同的j
//				j = i+1;
//				while ((abs(A[j] - j) % 2 == 0 || abs(j - i) % 2 == 0) && j < len)
//				{
//					++j;
//				}
//				//j要满足abs(j-i)%2 != 0 && abs(A[j] - j) % 2 != 0,才是需要的j
//				swap(A[i], A[j]);
//			}
//			++i;
//		}
//		return A;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}