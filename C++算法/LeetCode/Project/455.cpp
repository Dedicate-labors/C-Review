//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////题目：g是每个小孩子的胃口值，s是每个饼干的大小
////先对g，s排序吧，
//
//class Solution {
//public:
//	int findContentChildren(vector<int>& g, vector<int>& s) {
//		int leng = g.size(), lens = s.size();
//		if (!leng || !lens) return 0;
//		int ming = g[0], maxg = g[0], mins = s[0], maxs = s[0];
//		for (int i = 1; i < leng; ++i) { if (g[i] > maxg)maxg = g[i]; if (g[i] < ming) ming = g[i]; }
//		for (int i = 1; i < lens; ++i) { if (s[i] > maxs)maxs = s[i]; if (s[i] < mins) mins = s[i]; }
//		int ans = leng > lens ? lens : leng;
//		if (maxg <= mins || maxs < ming) return ans;
//		sort(g.begin(), g.end()); sort(s.begin(),s.end());
//		//以饼干cookie为主的循环
//		ans = 0;
//		for (int i = 0, j = 0; i < leng && j < lens;++j) {
//			if (g[i] <= s[j]) {
//				++i;
//				++ans;
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	return 0;
//}