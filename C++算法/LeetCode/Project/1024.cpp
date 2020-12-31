//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<limits.h>
//using namespace std;
//
//class Solution {
//public:
//	//找到start和end所在片段，注：要求该片段大小最大
//	//再找到开始和结尾的片段后，寻求中间的片段，要求片段数目最少
//	//start和end附近开始双指针寻找满足要求的最长片段
//	int videoStitching(vector<vector<int>>& clips, int T) {
//		int start = -1, end = -1, n = clips.size(); //start和end记录的是片段的下标
//		int max1 = -1, max2 = -1;
//		int pstart, pend;
//		for (int i = 0; i < n;++i) {
//			pstart = clips[i][0];
//			pend = clips[i][1];
//			if (pstart <= 0 && pend-0 > max1) {
//				max1 = pend - 0;
//				start = i;
//			}
//			if (pend >= T && pstart <= T && T - pstart > max2) {
//				max2 = T - pstart;
//				end = i;
//			}
//		}
//		if (start == -1 || end == -1) return -1;
//		//start == end ???表示一段就可以完成
//		if (start == end) return 1;
//		//现在改变start和end的含义，变为中间片段范围
//		start = clips[start][1];
//		end = clips[end][0];
//		//表示两段完成
//		if (start >= end) return 2;
//		//选出pstart <= start <= pend 或者 pstart <= start && end <= pend
//		//从两者中选出pend-start长度最大的,但还是没结果咋搞？？递归
//		int count = 2; //还没加入前面的情况
//		return retContain(start, end, clips, count);
//	}
//	int retContain(int start, int end, vector<vector<int>>& clips, int count) //是否包含end
//	{
//		//求出相对于start的pstart和pend 
//		int pstart = -1, pend = -1, max = -1;
//		for (auto item : clips) {
//
//			if (item[0] <= start && item[1] > start && item[1] - start >= max) {
//				pstart = item[0];
//				pend = item[1];
//				max = pend - start;
//			}
//		}
//		if (max == -1) return -1;
//		//pend和end的大小比较
//		//cout << pstart << " " << pend << endl;
//		if (pend >= end) return count+1;
//		else{
//			start = pend;
//			count += 1;
//			return retContain(start, end, clips, count);
//		}
//	}
//
//	//方法二：动态规划，由下到上全部枚举
//	//dp[i]代表[0, i]片段的最小组成数,dp[0] = 0,其他全部初始化最大值
//	int videoStitching2(vector<vector<int>>& clips, int T) {
//		vector<int> dp(T+1, INT_MAX-1);
//		dp[0] = 0;
//		for (int i = 1; i <= T; ++i) {
//			for (auto & it : clips) {
//				if (it[0] < i && it[1] >= i) {
//					dp[i] = min(dp[i], dp[it[0]] + 1);
//				}
//			}
//		}
//		return dp[T] == INT_MAX - 1 ? -1 : dp[T];
//	}
//};
//
//int main() {
//	Solution S;
//	int T;
//	vector<vector<int>> clips = { {0,2},{4,6},{8,10},{1,9},{1,5},{5,9} };
//	//cin >> T;
//	//cout << S.videoStitching(clips, T) << endl;
//	S.retContain(2, 8, clips, 2);
//	return 0;
//}