//#include<vector>
//#include<iostream>
//#include<cmath>
//#include<set>
//using namespace std;
//
//class Solution {
//public:
//	//˼·��ԭ���������и�����������
//	//ƽ���������ȫ����������˳����Կ�����ԭ����ľ���ֵ����
//	vector<int> sortedSquares(vector<int>& A) {
//		multiset<int> temp; //���A���������ֵ
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
//	//��������˫ָ�뷨����ֵƽ������бȽϣ��ٴ洢
//	vector<int> sortedSquares2(vector<int>& A) {
//		int n = A.size();
//		int i = 0, j = n - 1;
//		vector<int> ret(n);
//		//ѭ��
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
