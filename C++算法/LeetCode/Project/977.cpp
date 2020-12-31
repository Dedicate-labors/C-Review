//#include<vector>
//#include<iostream>
//#include<cmath>
//#include<set>
//using namespace std;
//
//class Solution {
//public:
//	//思路，原数组有正有负，升序排列
//	//平方后的数组全是正数，但顺序可以看作是原数组的绝对值排序
//	vector<int> sortedSquares(vector<int>& A) {
//		multiset<int> temp; //存放A的升序绝对值
//		for (auto &it : A) {
//			temp.insert(abs(it));
//		}
//		vector<int> ret;
//		for (auto &it : temp) {
//			ret.emplace_back(it*it);
//		}
//		return ret;
//	}
//
//	//方法二：双指针法，将值平方后进行比较，再存储
//	vector<int> sortedSquares2(vector<int>& A) {
//		int n = A.size();
//		int i = 0, j = n - 1;
//		vector<int> ret(n);
//		//循环
//		for (int k = n - 1; k >= 0; ++k) {
//			if (A[i] * A[i] >= A[j] * A[j]) {
//				ret[k] = A[i] * A[i];
//				++i;
//			}
//			else {
//				ret[k] = A[j] * A[j];
//				--j;
//			}
//		}
//		return ret;
//	}
//};
//
//int main() {
//
//	return 0;
//}
