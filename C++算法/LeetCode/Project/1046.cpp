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
//		//stonesװ��q
//		for (int i = 0; i < n; ++i) { q.push(stones[i]); }
//
//		//����Ϸ���ѭ����q.size() <= 1Ϊֹ
//		while (q.size() > 1)
//		{
//			//ÿ���ų���������ʯͷ������һ���������ʯͷ����
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