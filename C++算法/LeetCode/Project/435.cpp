//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////��Ŀ��Ϊ��ʹ���䲻���ص����Ƴ����ٵ�������Ŀ�ﵽĿ��
////ע�⣺��ĿûҪ���������������ֻ�ǲ��ص����ɣ����Ե������������������ص�Ҫ���ų�ʱѡ��ϴ��
////�����ص���Ҫ������a1[left, right] a2[left, right]�Ը���left�����, a1[1] ��  a2[0]�Ĺ�ϵ�����Ƿ��ص�
////a[1] > a[2] �ص� a[1] <= a[2]���ص�
////�Ƴ����پ���Ҫ���Ǹ�������ĳ��ȣ��������໥�ص����ų���right���
////�ܽ᣺���ص���Ҫ�ų���ʹ��̰���㷨
//
////[[2,3], [1, 4], [4, 5]] �����1
////[[1,100],[11,22],[1,11],[2,12]] �����2
////[[23, 37], [28, 40], [39, 46], [49, 61], [58, 69], [61, 73]] �����2
//
////����2����̬�滮
//class Solution {
//public:
//	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//		//����ÿ�����俪ʼ��������
//		int n = intervals.size();
//		if (n <= 1) return 0;
//		sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b) { return a[0] < b[0]; });
//		int ans = 0;
//		//���ص����ų����ų������µĻ��ǵü����Ƚ�
//		int i = 0, j = i + 1;
//		while (i < n && j < n){
//			if (intervals[i][1] > intervals[j][0]) {
//				//�����ص�
//				//�����ص������rightȥ�ж�
//				int a = intervals[i][1];
//				int b = intervals[j][1];
//				if (b >= a) ++j;
//				else {
//					i = j;
//					++j;
//				}
//				ans++;
//			}
//			else {
//				//δ�����ص�
//				i = j;
//				++j;
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	vector<vector<int>> intervals = { {23,37},{28,40},{39,46},{49,61},{58,69},{61,73} };
//	Solution S;
//	cout << S.eraseOverlapIntervals(intervals) << endl;
//	return 0;
//}