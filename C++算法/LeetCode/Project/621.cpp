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
//	//���ʱ�䣬�����Ƕ�̬�滮������ֱ�Ӻ���õ���ʽ��
//	//��������ΪmaxC, (maxC-1)*n + maxC�����Ҫ��key�ĵ�λʱ��
//	//nums������ʵ�ʻ����˶�����key��(�Ͼ��п�����������)������Ϊ m, 3<= m <= key
//	//(nums - m) + key
//	int leastInterval(vector<char>& tasks, int n) {
//		unordered_map<char, int> mapT;
//		//maxC������ظ�������nums����������
//		int maxC = 0, nums = tasks.size();
//		for (auto &ch : tasks) {
//			mapT[ch]++;
//			maxC = max(maxC, mapT[ch]);
//		}
//		vector<pair<char, int>> temp(mapT.begin(), mapT.end());
//		//��map����ɽ���
//		sort(temp.begin(), temp.end(), [](pair<char, int> &a, pair<char, int> &b) { return a.second > b.second; });
//
//		//key����������޶ȴ�������Ҫ�������������������m
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