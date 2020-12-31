//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//key一定能由ring拼写出来，最少步数
//	//ring模拟成圆环，ring中与key[i]最接近的是谁，就走多少步,但可能会出现同时一样近的
//	//动态规划，看题解
//
//	int findRotateSteps(string ring, string key) {
//		int n = ring.size(), m = key.size();
//		vector<int> pos[26]; //26个字母的二维数组，存放ring的字符的下标，相同字符的下标放入同一个数组中
//		for (int i = 0; i < n; ++i) {
//			pos[ring[i] - 'a'].push_back(i);
//		}
//		//之所以没有用二叉树型而选择矩阵，是因为矩阵更方便
//		vector<vector<int>> dp(m, vector<int>(n, 0x3f3f3f3f)); //初始值全是最大的，ring和key下标组成的dp[i][j]
//		//dp[i][j]表示key[i] == ring[j]时的最小步数
//		for (auto& i : pos[key[0] - 'a']) {
//			dp[0][i] = min(i, n - i) + 1; //key[0][j]时，j不同情况下的最短步数
//		}
//		
//		for (int i = 1; i < m; ++i) {
//			for (auto& j : pos[key[i] - 'a']) {
//				//一定key[i] == ring[j]
//				for (auto& k : pos[key[i - 1] - 'a']) {
//					//从上一个dp[i-1][k]到达dp[i][j]有很多种情况，寻找其中最小step的
//					dp[i][j] = min(dp[i][j], dp[i - 1][k] + min(abs(j - k), n - abs(j - k)) + 1);
//					//min(abs(j - k), n - abs(j - k)) + 1，以k为轴，到达j的步数，及最后的确认，此时计算中的k,j都是确定下来的
//				}
//			}
//		}
//		return *min_element(dp[m - 1].begin(), dp[m - 1].end()); //最后到达key[m-1]时中，选择最小的step
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