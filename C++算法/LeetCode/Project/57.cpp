//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//ȷ���漰��intervals�����±�
//	//֮ǰһֱ��intervalsΪ������˼������λ˼���£���newIntervalΪ�������ж�
//	//1. ������ص���ֱ�ӽ���
//	//2. �����ص�
//	//3. �ұ����ص���ֱ�ӽ���
//	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//		int n = intervals.size(), i;
//		vector<vector<int>> ret;
//		//������ص�����
//		for (i = 0; i < n; ++i) {
//			if (intervals[i][1] < newInterval[0]) {
//				ret.push_back(intervals[i]);
//			}
//			else break;
//		}
//		//�ص����ֿ�ʼ
//		//intervals[i][1] >= newInterval[0] ����ֱ���˳� i == n�����
//		int min = newInterval[0];
//		if (i < n && i >= 0) min = intervals[i][0] > newInterval[0] ? newInterval[0] : intervals[i][0];
//		int max = newInterval[1];
//		while (i < n && intervals[i][0] <= newInterval[1])
//		{
//			max = intervals[i][1] > newInterval[1] ? intervals[i][1] : newInterval[1];
//			++i;
//		}
//		ret.push_back({min, max});
//		//�ұ����ص����� intervals[i][0] > newInterval[1]������
//		for (; i < n; ++i) {
//			ret.push_back(intervals[i]);
//		}
//		return ret;
//	}
//};
//
//int main() {
//	Solution S;
//	vector<vector<int>> a{ {1, 5}};
//	vector<int> b{1, 7};
//	S.insert(a, b);
//	return 0;
//}