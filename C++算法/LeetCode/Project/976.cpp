//#include<vector>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	//面积不为0，所以 a+b > max(c), 这样也是三角形的成立条件,既剩余两边和要大于第三边
//	//要求周长最大，找到最长的C边，再寻找a+b>C的a，b两边，找不到就找下一个最大C边。。。
//	//如果连三角形都构成不了，就直接return 0；
//	int largestPerimeter(vector<int>& A) {
//		//排序A
//		sort(A.begin(), A.end());
//		int a = 0, b = 0, c = 0, end = A.size() - 1; //取三边
//		if (end < 2) return 0; //小于三个直接返回
//		for (int i = end; i >= 0; --i) {
//			//遍历的是C，a，b也很可能得不到
//			c = A[i]; 
//			if (i - 1 < 0 || i - 2 < 0) break;
//			b = A[i - 1]; a = A[i - 2];
//			if (a + b > c) return a + b + c;
//		}
//		return 0;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}