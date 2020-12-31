//#include<string>
//#include<vector>
//#include<iostream>
//#include<algorithm>
//#include<unordered_map>
//#include<cmath>
//
//using namespace std;
//
//class Solution {
//public:
//	//最短时间，所以是动态规划，但我直接好像得到公式了
//	//设最大次数为maxC, (maxC-1)*n + maxC是最低要求key的单位时间
//	//nums个任务实际花费了多少在key中(毕竟有空闲任务在内)，计算为 m, 3<= m <= key
//	//(nums - m) + key
//	int leastInterval(vector<char>& tasks, int n) {
//		unordered_map<char, int> mapT;
//		//maxC是最大重复次数，nums是任务总数
//		int maxC = 0, nums = tasks.size();
//		for (auto &ch : tasks) {
//			mapT[ch]++;
//			maxC = max(maxC, mapT[ch]);
//		}
//		vector<pair<char, int>> temp(mapT.begin(), mapT.end());
//		//将map改造成降序
//		sort(temp.begin(), temp.end(), [](pair<char, int> &a, pair<char, int> &b) { return a.second > b.second; });
//
//		//key是任务最低限度次数，且要“尽量塞满”它来求解m
//		int key = (maxC - 1)*n + maxC, m = maxC;
//		for (int i = 1; i < temp.size(); ++i) {
//			if (temp[i].second >= maxC) m += maxC - 1;
//			else m += temp[i].second;
//
//		}
//		if (m >= key) return nums;
//		return (nums - m) + key;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<char> tasks = { 'A','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
//	int n = 29;
//	S.leastInterval(tasks, n);
//	return 0;
//}