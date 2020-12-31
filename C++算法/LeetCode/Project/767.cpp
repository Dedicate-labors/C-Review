//#include<iostream>
//#include<vector>
//#include<map>
//#include<cmath>
//#include<string>
//#include<cstring>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
////方法一：在确定可以得到相邻字符不同的字符串后，使用大顶堆(优先队列)计算结果
////方法二：看题解，不过比较难想到
//
//class Solution {
//public:
//	string reorganizeString(string S) {
//		if (S.length() < 2) return S;
//		vector<int> counts(26, 0);
//		int maxCount = 0;
//		int length = S.length();
//		for (int i = 0; i < length; ++i) {
//			char c = S[i];
//			counts[c - 'a']++;
//			maxCount = max(maxCount, counts[c-'a']);
//		}
//
//		if (maxCount > (length + 1) / 2) return ""; //这里排除了，不代表一定就可以成功组成
//		auto cmp = [&](const char& letter1, const char & letter2) {
//			return counts[letter1 - 'a'] < counts[letter2 - 'a'];
//		};
//
//		//创建优先队列，大顶堆,根据每个字母的次数比较出来的
//		priority_queue<char, vector<char>, decltype(cmp)> queue(cmp);
//		for (char c = 'a'; c <= 'z'; c++) {
//			if (counts[c - 'a'] > 0) {
//				queue.push(c);
//			}
//		}
//		string sb = "";
//		while (queue.size() > 1)
//		{
//			char letter1 = queue.top(); queue.pop();
//			char letter2 = queue.top(); queue.pop();
//			sb += letter1;
//			sb += letter2;
//			int index1 = letter1 - 'a', index2 = letter2 - 'a';
//			counts[index1]--;
//			counts[index2]--;
//			if (counts[index1] > 0) {
//				queue.push(letter1);
//			}
//			if (counts[index2] > 0) {
//				queue.push(letter2);
//			}
//		}
//		if (queue.size() > 0) {
//			sb += queue.top();
//		}
//		return sb;
// 	}
//};
//
//int main()
//{
//	//Solution S;
//	//S.reorganizeString("aab");
//	string s = "aab";
//	return 0;
//}