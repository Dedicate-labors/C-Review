//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//���������Ʊ���۸��ʱ���룬�۸��ʱ������
//	int maxProfit(vector<int>& prices) {
//		//�½����ҵ���ͼۣ����߾��ҵ���߼�
//		//ɽ��
//		int n = prices.size(), i = 0;
//		int min, max;
//		int sum = 0;
//		while (i+1 < n) {
//			if (prices[i] < prices[i + 1]) {
//				min = prices[i];
//				while (i+1 < n && prices[i] < prices[i + 1]) ++i;
//				max = prices[i];
//				sum += (max - min);
//			}
//			++i;
//		}
//		return sum;
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> a{7,1,5,3,6,4};
//	cout << S.maxProfit(a) << endl;
//	return 0;
//}