//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//
//using namespace std;
//
////ͳ������С�ڷǸ����� n ��������������
////1,3,5,7,11,������Ҫ��2��ʼ��
//
//class Solution {
//public:
//	int countPrimes(int n) {
//		int ans = 0;
//		for (int i = 2; i < n; ++i) {
//			if (isZhiShu(i)) ans++;
//		}
//		return ans;
//	}
//	bool isZhiShu(int num) {
//		int b = static_cast<int>(sqrt(num)); //�������������ת��
//		for (int i = 2; i <= b; ++i) {
//			if (num % i == 0) return false;
//		}
//		return true;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}