//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//ÿ���������Ϸ������Ϸ������ĺ�
//	//ÿ�п�ʼ�ͽ�β����1���м��������ʹ�����Ϸ������Ϸ���,�ӵ�2�п�ʼ
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>> ans(numRows);
//		if (numRows == 0) return ans;
//		ans[0].push_back(1); //�ʼ�ĵ�һ��
//		for (int i = 0; i < numRows - 1; ++i) {
//			//i+1��ʾ��ǰ���±꣬i��ʾ��ǰ��Ҫд���Ԫ�ظ���
//			ans[i + 1].push_back(1);
//			//����i��Ԫ��
//			for(int j = 0; j < i; ++j){
//				int num = ans[i][j] + ans[i][j + 1];
//				ans[i + 1].push_back(num);
//			}
//			ans[i + 1].push_back(1);
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	Solution S;
//	S.generate(5);
//	return 0;
//}