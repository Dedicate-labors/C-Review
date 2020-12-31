//#include<iostream>
//#include<unordered_map>
//#include<vector>
//
//using namespace std;
//
//class Solution {
//public:
//	int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
//		unordered_map<int, int> countAB;
//		for (int u : A) {
//			for (int v : B) {
//				++countAB[u + v];
//			}
//		}
//		int ans = 0;
//		for (int u : C) {
//			for (int v : D) {
//				//-(u+v)ÔÚcountABÖÐ
//				if (countAB.count(-u - v)) {
//					ans += countAB[-u - v];
//				}
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}
