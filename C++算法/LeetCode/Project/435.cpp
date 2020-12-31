//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////题目是为了使区间不再重叠，移除最少的区间数目达到目的
////注意：题目没要求区间必须连续，只是不重叠即可，所以当有两个及以上区间重叠要被排除时选择较大的
////满足重叠的要求：区间a1[left, right] a2[left, right]以根据left排序好, a1[1] 和  a2[0]的关系决定是否重叠
////a[1] > a[2] 重叠 a[1] <= a[2]不重叠
////移除最少就需要考虑各个区间的长度：当区间相互重叠，排除掉right大的
////总结：有重叠就要排除，使用贪心算法
//
////[[2,3], [1, 4], [4, 5]] 结果是1
////[[1,100],[11,22],[1,11],[2,12]] 结果是2
////[[23, 37], [28, 40], [39, 46], [49, 61], [58, 69], [61, 73]] 结果是2
//
////方法2：动态规划
//class Solution {
//public:
//	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//		//根据每个区间开始进行排序
//		int n = intervals.size();
//		if (n <= 1) return 0;
//		sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b) { return a[0] < b[0]; });
//		int ans = 0;
//		//有重叠就排除，排除后余下的还是得继续比较
//		int i = 0, j = i + 1;
//		while (i < n && j < n){
//			if (intervals[i][1] > intervals[j][0]) {
//				//发生重叠
//				//根据重叠区间的right去判断
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
//				//未发生重叠
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