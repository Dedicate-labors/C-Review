//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//keyһ������ringƴд���������ٲ���
//	//ringģ���Բ����ring����key[i]��ӽ�����˭�����߶��ٲ�,�����ܻ����ͬʱһ������
//	//��̬�滮�������
//
//	int findRotateSteps(string ring, string key) {
//		int n = ring.size(), m = key.size();
//		vector<int> pos[26]; //26����ĸ�Ķ�ά���飬���ring���ַ����±꣬��ͬ�ַ����±����ͬһ��������
//		for (int i = 0; i < n; ++i) {
//			pos[ring[i] - 'a'].push_back(i);
//		}
//		//֮����û���ö������Ͷ�ѡ���������Ϊ���������
//		vector<vector<int>> dp(m, vector<int>(n, 0x3f3f3f3f)); //��ʼֵȫ�����ģ�ring��key�±���ɵ�dp[i][j]
//		//dp[i][j]��ʾkey[i] == ring[j]ʱ����С����
//		for (auto& i : pos[key[0] - 'a']) {
//			dp[0][i] = min(i, n - i) + 1; //key[0][j]ʱ��j��ͬ����µ���̲���
//		}
//		
//		for (int i = 1; i < m; ++i) {
//			for (auto& j : pos[key[i] - 'a']) {
//				//һ��key[i] == ring[j]
//				for (auto& k : pos[key[i - 1] - 'a']) {
//					//����һ��dp[i-1][k]����dp[i][j]�кܶ��������Ѱ��������Сstep��
//					dp[i][j] = min(dp[i][j], dp[i - 1][k] + min(abs(j - k), n - abs(j - k)) + 1);
//					//min(abs(j - k), n - abs(j - k)) + 1����kΪ�ᣬ����j�Ĳ�����������ȷ�ϣ���ʱ�����е�k,j����ȷ��������
//				}
//			}
//		}
//		return *min_element(dp[m - 1].begin(), dp[m - 1].end()); //��󵽴�key[m-1]ʱ�У�ѡ����С��step
//	}
//};
//
//int main()
//{
//	Solution S;
//	string ring = "nyngl", key="yyynnnnnnlllggg";
//	cout << S.findRotateSteps(ring, key) <<endl;
//	return 0;
//}