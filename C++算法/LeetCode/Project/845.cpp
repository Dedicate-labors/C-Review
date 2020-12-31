//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
////方法一：暴力解题，超时了
////方法二：此题很类似KMP算法，查看满足mountain条件与否，满足就继续，分支就根据情况跳过
////方法二很反感pre == cur的情况
////方法三：动态规划，也算题解
////方法四：对我的方法一，二进行的超进化
//class Solution {
//public:
//	int longestMountain(vector<int>& A) {
//		int n = A.size(), max = 0;
//		vector<int> temp;
//		bool flag = true;
//		for (int i = 0; i < n; ++i) {
//			//寻求开头 i， 还可以尝试改变j的值，但更复杂
//			int j = i;
//			flag = true;
//			while (j != n && flag) {
//				temp.push_back(A[j]);
//				if (temp.size() >= 3 && judgeMountain(temp, flag)) {
//					if(temp.size() > max)
//						max = temp.size();
//				}
//				++j;
//			}
//			temp.clear();
//		}
//		return max;
//	}
//	
//	//这个temp.size() >= 3
//	bool judgeMountain(vector<int>& temp, bool &xh){
//		int i = 2, pre = temp[0], cur = temp[1];
//		int n = temp.size();
//		// xh=true的情况只有两种，一是递增型，而是满足型
//		// temp和格的情况也很严格
//		if (pre < cur) {
//			while (pre < cur && i < n) {
//				pre = cur;
//				cur = temp[i++];
//			}
//			if (pre > cur && i <= n) {
//				while (pre > cur && i < n) {
//					pre = cur;
//					cur = temp[i++];
//				}
//				if (pre > cur && i >= n) return true;
//				xh = false;
//				return false;
//			}
//			if (pre < cur && i >= n) xh = true;
//			else xh = false;
//			return false;
//		}
//		else {
//			xh = false;
//			return false;
//		}
//	}
//	int longestMountain2(vector<int>& A) {
//		int n = A.size();
//		if (!n) {
//			return 0;
//		}
//		vector<int> left(n);
//		left[0] = 0;
//		for (int i = 1; i < n; ++i) {
//			left[i] = (A[i - 1] < A[i] ? left[i - 1] + 1 : 0);
//		}
//		vector<int> right(n);
//		right[n - 1] = 0;
//		for (int i = n-2; i >= 0; --i) {
//			right[i] = (A[i] > A[i+1] ? right[i + 1] + 1 : 0);
//		}
//		int ans = 0;
//		for (int i = 0; i < n; ++i) {
//			if (left[i] > 0 && right[i] > 0) {
//				ans = max(ans, left[i] + right[i] + 1);
//			}
//		}
//		return ans;
//	}
//
//	//方法四
//	int longestMountain3(vector<int>& A) {
//		int n = A.size();
//		int ans = 0;
//		int left = 0;
//		while (left + 2 < n) {
//			int right = left + 1;
//			if (A[left] < A[left + 1]) {
//				while (right + 1 < n && A[right] < A[right + 1]) {
//					++right;
//				}
//				if (right < n - 1 && A[right] > A[right + 1]) {
//					while (right + 1 < n && A[right] > A[right + 1]) {
//						++right;
//					}
//					ans = max(ans, right - left + 1);
//				}
//				else {
//					++right;
//				}
//			}
//			left = right;
//		}
//		return ans;
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> A{ 2,2,2 };
//	cout << S.longestMountain(A) << endl;
//	return 0;
//}