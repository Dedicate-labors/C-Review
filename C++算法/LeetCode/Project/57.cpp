//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//确定涉及的intervals区间下标
//	//之前一直以intervals为主进行思考，换位思考下，以newInterval为主进行判断
//	//1. 左边无重叠的直接进入
//	//2. 发生重叠
//	//3. 右边无重叠的直接进入
//	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//		int n = intervals.size(), i;
//		vector<vector<int>> ret;
//		//左边无重叠部分
//		for (i = 0; i < n; ++i) {
//			if (intervals[i][1] < newInterval[0]) {
//				ret.push_back(intervals[i]);
//			}
//			else break;
//		}
//		//重叠部分开始
//		//intervals[i][1] >= newInterval[0] 或者直接退出 i == n的情况
//		int min = newInterval[0];
//		if (i < n && i >= 0) min = intervals[i][0] > newInterval[0] ? newInterval[0] : intervals[i][0];
//		int max = newInterval[1];
//		while (i < n && intervals[i][0] <= newInterval[1])
//		{
//			max = intervals[i][1] > newInterval[1] ? intervals[i][1] : newInterval[1];
//			++i;
//		}
//		ret.push_back({min, max});
//		//右边无重叠部分 intervals[i][0] > newInterval[1]的条件
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