//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<cmath>
//using namespace std;
//
//class Solution {
//public:
//	//����ķ����ŵ��ѿ����������һ��˼ά��Ͱ����
//	vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
//		unordered_map<int, vector<vector<int>>> mapWithLen; //key�ǹ���len���ȵģ�value����ص���ɵ�����
//		//mapWithLen���һ��Ͱ
//		//�������нڵ�
//		int len = 0;
//		for (int i = 0; i < R; ++i) {//��
//			for (int j = 0; j < C; ++j) { //��
//				len = abs(i - r0) + abs(j - c0);
//				mapWithLen[len].push_back({i, j});
//			}
//		}
//		//��ϳ����
//		vector<vector<int>> ret;
//		//����key,0->map.szie();
//		for (int i = 0; i < mapWithLen.size(); ++i) {
//			for (auto &it : mapWithLen[i]) {
//				ret.push_back(it);
//			}
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}