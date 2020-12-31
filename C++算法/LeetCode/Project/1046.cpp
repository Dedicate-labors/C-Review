//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//	int lastStoneWeight(vector<int>& stones) {
//		int n = stones.size();
//		if (n == 0) return 0;
//		if (n == 1) return stones[1];
//		priority_queue<int, vector<int>, std::less<int>> q;
//		//stones装入q
//		for (int i = 0; i < n; ++i) { q.push(stones[i]); }
//
//		//这游戏最多循环到q.size() <= 1为止
//		while (q.size() > 1)
//		{
//			//每次排出两个最大的石头，余下一个或者零个石头下来
//			int max1 = q.top(); q.pop();
//			int max2 = q.top(); q.pop();
//			if (max1 == max2) {}
//			if (max1 != max2) { q.push(abs(max1 - max2)); }
//		}
//		if (q.size() == 0) return 0;
//		else return q.top();
//	}
//};
//
//int main()
//{
//	return 0;
//}