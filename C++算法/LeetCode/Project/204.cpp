//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//
//using namespace std;
//
////统计所有小于非负整数 n 的质数的数量。
////1,3,5,7,11,求质数要从2开始算
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
//		int b = static_cast<int>(sqrt(num)); //这里进行了类型转换
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