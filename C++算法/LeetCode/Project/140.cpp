//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//
////����һ�������ƽ⣬DFS�����㣬Ӧ����forǶ��ѭ������ġ���ʱ��
////��������д�����ļ�����
//class Solution {
//public:
//	void dfs(string s, int pos, vector<string>& wordDict, int &n, vector<string> words) {
//		//��������������һ�����ҵ��ˣ�һ����û�ҵ�
//		if (pos == s.length()) {
//			//��ϵ���
//			string content;
//			content += words[0];
//			for (int i = 1; i < words.size(); ++i) {
//				content += " ";
//				content += words[i];
//			}
//			ret.push_back(content);
//			return;
//		}
//		char ch = s[pos]; //ÿ��s�ַ�����ͷ�����ַ�
//		for (int i = 0; i < n; ++i) {
//			if (wordDict[i][0] == ch) {
//				int lastPos = retLast(s, pos, wordDict[i]);
//				if (lastPos == -1) continue;
//				//�ҵ�һ��
//				words.push_back(wordDict[i]);
//				dfs(s, lastPos, wordDict, n, words);
//				words.pop_back(); //������
//			}
//		}
//		//û�ҵ�
//		return;
//	}
//	vector<string> wordBreak(string s, vector<string>& wordDict) {
//		int n = wordDict.size();
//		vector<string> words; //���浱ǰ����Ѱ�ҵ��ַ���
//		dfs(s,0,wordDict,n,words);
//		return ret;
//	}
//	int retLast(string &s,int pos, string &word) {
//		//word�Ƿ����ڲ�
//		//�ڣ�������һ�����ʿ�ʼ�±ꣻ���ڣ�����-1��
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
//	vector<string> ret; //����ַ���
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