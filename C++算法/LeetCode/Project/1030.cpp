//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<cmath>
//using namespace std;
//
//class Solution {
//public:
//	//上面的方法优点难考虑情况，换一种思维，桶排序
//	vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
//		unordered_map<int, vector<vector<int>>> mapWithLen; //key是关于len长度的，value是相关点组成的数组
//		//mapWithLen变成一个桶
//		//遍历所有节点
//		int len = 0;
//		for (int i = 0; i < R; ++i) {//行
//			for (int j = 0; j < C; ++j) { //列
//				len = abs(i - r0) + abs(j - c0);
//				mapWithLen[len].push_back({i, j});
//			}
//		}
//		//组合出结果
//		vector<vector<int>> ret;
//		//遍历key,0->map.szie();
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