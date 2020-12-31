//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//gas是当前加油站的补充汽油量，cost是当前汽油站到下一个的消耗量
//	//当前加油站所做的工作，增加满汽油，减去消耗，余下的汽油>=0 为负就不行
//	//余下的汽油在下一个站点+汽油 - 消耗>=0,为负就不行
//	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//		//找出出发点，从每个出发点，试探
//		int len = gas.size();
//		//遍历行确定那一行可以出发
//		for (int i = 0; i < len; ++i)
//		{
//			int residue = gas[i] - cost[i];
//			if (residue >= 0) {
//				//遍历列，查看哪一个可以走到最后
//				int j = (i+1)%len, count = len-1;
//				while (count--)
//				{
//					residue += gas[j];
//					residue -= cost[j];
//					if (residue < 0) break;
//					j = (j + 1) % len;
//				}
//				if (count == -1) return j;
//			}
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> gas{1, 2, 3, 4, 5}, cost{3, 4, 5, 1, 2};
//	S.canCompleteCircuit(gas, cost);
//	return 0;
//}