//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//�����ж������Ƿ��������ټ�С
//	bool validMountainArray(vector<int>& A) {
//		int n = A.size(), left = 0, right = left + 1;
//		if (A[left] < A[right]) {
//			while (right+1 < n && A[right] < A[right+1]) {
//				++right;
//			}
//			if (right+1 < n && A[right] > A[right+1]) {
//				while (right+1< n && A[right] > A[right+1]) {
//					++right;
//				}
//				if (right + 1 >= n) return true;
//				else
//					return false;
//			}
//			else return false;
//		}
//		return false;
//	}
//};
//
//int main() {
//	Solution S;
//	return 0;
//}