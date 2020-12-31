//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//#include<unordered_set>
//using namespace std;
//
////方法二：使用的记忆化搜索和方法一一样，只不过，方法二进行了我没能做到的优化，比如大幅度的减枝
////记忆化搜索也可以看作自顶向下的动态规划：
////ans[index] = ans[i]+word; //ans[s]以当前index下标开始的句子们(以index下标字符开头的单词word也找到)，
////ans[i]是相距index  word单词长度  的以i开头的句子们
////ps：这里的word也可以是多个，通过wordSet判断是否在要求内
//class Solution {
//private:
//	unordered_map<int, vector<string>> ans;
//	unordered_set<string> wordSet;
//
//public:
//	vector<string> wordBreak(string s, vector<string>& wordDict) {
//		wordSet = unordered_set<string>(wordDict.begin(), wordDict.end()); //本来也没有重复的
//		backtrack(s, 0);
//		return ans[0];
//	}
//
//	void backtrack(const string& s, int index) {
//		//外面的判断，是为了减枝，避免重复的计算
//		if (!ans.count(index)) {
//			//结束条件之一
//			if (index == s.size()) {
//				ans[index] = { "" }; //为了能判断为空，尾巴这里需要初始化化一个空字符串
//				//也可以想成下标index==s.size()时，开头的句子就是空字符串，确定的
//				return;
//			}
//			ans[index] = {};
//			//外循环遍历s index后面的字符
//			for (int i = index + 1; i <= s.size(); ++i) {
//				string word = s.substr(index, i - index);
//				//wordSet之前已经初始化过了
//				if (wordSet.count(word)) {
//					backtrack(s, i); //获取i下标开头的句子们，既剩余部分的组成句子
//					//ans[index]代表当前以该下标开头的句子们
//					//ans[index]中添加word或者word+ans[i]中的句子们
//					for (const string& succ : ans[i]) {
//						ans[index].push_back(succ.empty() ? word : word + " " + succ);
//					}
//				}
//			}
//		}
//	}
//};
//
//int main() {
//
//	return 0;
//}