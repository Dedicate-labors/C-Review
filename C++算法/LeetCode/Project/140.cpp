//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//
////方法一：暴力破解，DFS？不算，应该是for嵌套循环解题的。超时了
////方法二：写在新文件中了
//class Solution {
//public:
//	void dfs(string s, int pos, vector<string>& wordDict, int &n, vector<string> words) {
//		//两个结束条件，一个是找到了，一个是没找到
//		if (pos == s.length()) {
//			//组合单词
//			string content;
//			content += words[0];
//			for (int i = 1; i < words.size(); ++i) {
//				content += " ";
//				content += words[i];
//			}
//			ret.push_back(content);
//			return;
//		}
//		char ch = s[pos]; //每次s字符串开头的首字符
//		for (int i = 0; i < n; ++i) {
//			if (wordDict[i][0] == ch) {
//				int lastPos = retLast(s, pos, wordDict[i]);
//				if (lastPos == -1) continue;
//				//找到一个
//				words.push_back(wordDict[i]);
//				dfs(s, lastPos, wordDict, n, words);
//				words.pop_back(); //回溯下
//			}
//		}
//		//没找到
//		return;
//	}
//	vector<string> wordBreak(string s, vector<string>& wordDict) {
//		int n = wordDict.size();
//		vector<string> words; //保存当前正在寻找的字符串
//		dfs(s,0,wordDict,n,words);
//		return ret;
//	}
//	int retLast(string &s,int pos, string &word) {
//		//word是否在内部
//		//在？返回下一个单词开始下标；不在，返回-1；
//		int n = word.size(), i, len = s.length();
//		for (i = 0; i < n; ++i) {
//			if (pos==len || word[i] != s[pos]) break;
//			else pos++;
//		}
//		if (i == n)
//			return pos;
//		else
//			return -1;
//	}
//private:
//	vector<string> ret; //结果字符串
//};
//
//int main() {
//	Solution S;
//	string s = "pineapplepenapple";
//	vector<string> wordDict{ "apple", "pen", "applepen", "pine", "pineapple" };
//	vector<string> ret = S.wordBreak(s, wordDict);
//	for (auto str : ret) {
//		cout << str << endl;
//	}
//	return 0;
//}