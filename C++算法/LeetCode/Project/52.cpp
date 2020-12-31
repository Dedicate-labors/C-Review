//#include<iostream>
//#include<vector>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<unordered_set>
//using namespace std;
//
////ģ����ͨ���ʺ��ڸ����ϵ��±��ж��Ƿ����
//class Solution {
//public:
//	int totalNQueens(int n) {
//		unordered_set<int> columns, diagonals1, diagonals2;
//		return backtrack(n, 0, columns, diagonals1, diagonals2);
//	}
//	int backtrack(int n, int row, unordered_set<int> &columns, unordered_set<int> &diagonals1, unordered_set<int> &diagonals2) {
//		if (n == row) return 1;
//		else {
//			int count = 0;
//			//��������ѡ����ȷ���ʵ��з��ûʺ�
//			for (int i = 0; i < n; ++i) {
//				if (columns.find(i) != columns.end()) {
//					continue;
//				}
//				//б���ϵ����в�
//				int diagonal1 = row - i;
//				if (diagonals1.find(diagonal1) != diagonals1.end()) {
//					continue;
//				}
//				//б���ϵĺ�
//				int diagonal2 = row + i;
//				if (diagonals2.find(diagonal2) != diagonals2.end()) {
//					continue;
//				}
//				columns.insert(i);
//				diagonals1.insert(diagonal1);
//				diagonals2.insert(diagonal2);
//				count += backtrack(n, row+1, columns, diagonals1, diagonals2);
//				//���ݣ�Ϊ�²���׼��
//				columns.erase(i);
//				diagonals1.erase(diagonal1);
//				diagonals2.erase(diagonal2);
//			}
//			return count;
//		}
//	}
//};
//
//int main() {
//	Solution S;
//	int n;
//	while (cin >> n) {
//		cout << S.totalNQueens(n) << endl;
//	}
//	return 0;
//}
