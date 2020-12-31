//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	//类似桶排序的方法,n = nums.size(),创建一个n+1个桶，每个桶范围是(max-min)/n为范围，将
//	//nums的元素放入桶中，至少有一个桶为空(n+1>n),所以最大差值一定不在桶内，而是桶间
//	//只需要计算相邻桶之间,如T1,T2,T1的最大值，T2的最小值，两者的差距
//	int maximumGap(vector<int>& nums) {
//		int n = nums.size(), max = 0, min = 0;
//		if (n < 2) return 0;
//		if (n == 2) return abs(nums[1] - nums[0]);
//
//		max = *max_element(nums.begin(), nums.end()), min = *min_element(nums.begin(), nums.end());
//		if (max - min == n - 1) return 1; //max - min >= n-1的
//		vector<vector<int>> barrel(n + 1); //n+1个桶,桶排序
//		//后面n个桶放入n-1个实际数据,max-min 与 n无直接关系，但按理说max-min >= n才行，否则d < 1
//		int d = 1;
//		if (max - min >= n)
//			d = (max - min) % n == 0 ? (max - min) / n : (max - min) / n + 1;
//		//j=0的桶范围就是min,  min + (j-1)*d< num<=min + j*d (j=1...n) 
//		//遍历n个数据放入n+1个桶中,至少有一个桶为空
//		for (int i = 0; i < n; ++i) {
//			int num = nums[i];
//			int r = (num - min) % d;
//			if (r == 0) {
//				//r = 0, 那么该num等于所在桶上限
//				barrel[(num - min) / d].push_back(num);
//			}
//			else {
//				barrel[(num - min) / d + 1].push_back(num);
//			}
//		}
//		//计算最大间距,遍历n+1个桶,第一个桶一定有min
//		int ans = 0;
//		max = min;
//		for (int i = 1; i < n + 1; ++i) {
//			if (barrel[i].size() != 0) {
//				min = *min_element(barrel[i].begin(), barrel[i].end());
//				if (min - max > ans) ans = min - max;
//				max = *max_element(barrel[i].begin(), barrel[i].end());
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> nums = {3, 6, 9, 1};
//	S.maximumGap(nums);
//	return 0;
//}
